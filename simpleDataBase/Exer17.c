#include <assert.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

typedef struct Address {
  int id;
  int set;
  char name[MAX_DATA];
  char email[MAX_DATA];
  
} Address;

typedef struct Database {
  Address rows[MAX_ROWS];
} Database;

typedef struct Connection {
  FILE *file;
  Database *db;
} Connection;

void die(const char *message) {
  if (errno)
    perror(message);
  else
    printf("ERROR: %s \n", message);

  exit(1);
}

void Address_print(Address *addr) {
  printf("%d %s %s\n", addr->id, addr->name, addr->email);
}

void Database_load(Connection *conn) {
  int rc = fread(conn->db, sizeof(Database), 1, conn->file);

  if (rc != 1) {
    die("Failed to load database\n");
  }
}

Connection *Database_open(const char *filename, char mode) {
  Connection *conn = malloc(sizeof(Connection));

  if (!conn) {
    die("Memory error\n");
  }

  conn->db = malloc(sizeof(Database));

  if (!conn->db) {
    die("Memory error\n");
  }

  if (mode == 'c') {
    conn->file = fopen(filename, "w");
  } else {
    conn->file = fopen(filename, "r+");

    if (conn->file)
      Database_load(conn);
  }

  if (!conn->file)
    die("Failed to open\n");

  return conn;
}

void Database_close(Connection *conn) {

  if (conn) {
    if (conn->file)
      fclose(conn->file);
    if (conn->db)
      free(conn->db);

    free(conn);
  }
}

void Database_write(Connection *conn) {
  rewind(conn->file);

  int rc = fwrite(conn->db, sizeof(Database), 1, conn->file);

  if (rc != 1)
    die("Failed to write database\n");

  rc = fflush(conn->file);

  if (rc == -1)
    die("Cannot flush database\n");
}

void Database_create(Connection *conn) {
  int i = 0;

  for (i = 0; i < MAX_ROWS; i++) {
    // make a prototioe to initilize it

    Address addr = {.id = i, .set = 0};
    // Then just assign it

    conn->db->rows[i] = addr;
  }
}

void Databse_set(Connection *conn, int id, const char *name,
                 const char *email) {
  Address *addr = &conn->db->rows[id];
  if (addr->set)                
    die("Already set, delete it first\n");

  addr->set = 1;
  // WARNING: bug, "Read the how to break it" and fix this
  char *res = strncpy(addr->name, name, MAX_DATA);
  // demostrate the strncpy bug
  if (!res)
    die("Name copy failed\n");

  res = strncpy(addr->email, email, MAX_DATA);
  if (!res)
    die("Email copy failed");
}

void Databse_get(Connection *conn, int id) {
  Address *addr = &conn->db->rows[id];

  if (addr->set) {
    Address_print(addr);

  } else {
    die("ID is not set\n");
  }
}

void Database_delete(Connection *conn, int id) {
  Address addr = {.id = id, .set = 0};
  conn->db->rows[id] = addr;
}

void Database_list(Connection *conn) {
  int i = 0; 

  Database *db = conn->db;

  for (i = 0; i < MAX_ROWS; i++) {
    Address *cur = &db->rows[i];
    if (cur->set) {
      Address_print(cur);
    }
  }
}

int main(int argc, char const *argv[]) {
  if (argc < 3)
    die("USAGE : Ex17 <dbfile> <action> [action param]");

  char const *filename = argv[1];
  char action = argv[2][0];
  Connection *conn = Database_open(filename, action);
  int id = 0;

  if (argc > 3)
    id = atoi(argv[3]);

  if (id >= MAX_ROWS)
    die("There's not that many records\n");

  switch (action) {
  case 'c':
    Database_create(conn);
    Database_write(conn);
    break;
  case 'g':
    if (argc != 4)
      die("Need an id to get\n");
    Databse_get(conn, id);
    break;
  case 's':
    if (argc != 6)
      die("Need id, name, email to set");

    Databse_set(conn, id, argv[4], argv[5]);
    Database_write(conn);
    break;
  case 'd':
    if (argc != 4)
      die("Need id to delete\n");

    Database_delete(conn, id);
    Database_write(conn);
    break;
  case 'l':
    Database_list(conn);
    break;
  default:
    die("Invalid action: c=create, g=get,s=set,d=del,l=list\n");
  }

  Database_close(conn);

  return 0;
}
