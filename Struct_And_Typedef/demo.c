#include <stdio.h>
#include <string.h>
// FantasqueSansMono NF

typedef int Num;

struct num {
  int x;
  int y;
};

typedef struct Point {
  int y;
  int x;
} Point;

typedef struct Student {
  char name[50];
  int age;
  int tall;
  int grade;
} Student;

void print_student(Student any) {
  printf("%s\nAge : %d\nGrade : %d\nTall : %dcm\n", any.name, any.age,
         any.grade, any.tall);
}

int main(void) {

  Point one = {.x = 8, .y = 5};
  printf("Sruct one = (%d, %d)\n\n", one.x, one.y);

  Student ivan;
  ivan.age = 18;
  ivan.grade = 3;
  strcpy(ivan.name, "Ivan Hernandez");
  ivan.tall = 177;

  print_student(ivan);
  
  return 0;
}