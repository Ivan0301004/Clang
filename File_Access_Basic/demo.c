#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
  FILE *myFile; //

  myFile = fopen("ivan.txt", "w");
  /*  fputs("First line in my file\n", myFile);
          fputs("I  gonna be a shit in programming later\n", myFile);
          fputs("Favourite song is The Chant of Gojira \U0001F984 \n ", myFile);
          fputs("I  gonna be a shit in programming later\n", myFile);
  ? We can print data with variables into files
          double PI = 3.141592;
          fprintf(myFile, "\n--The value of PI is : %f--\n", PI);
  */
  char name[100];

  printf("--- Ingresa 10 nombres --- \n\n");

  for (int i = 1; i <= 10; i++) {
    printf("Nombres : ");
    fgets(name, sizeof(name), stdin);
    fprintf(myFile, "%s", name);
  }
  fclose(myFile);

  FILE *read;

  char input[100];
  read = fopen("ivan.txt", "r");

  fgets(input, 100, read);
	printf("Nombre : %s\n", input);

	fclose(read);
  
  return 0;
}