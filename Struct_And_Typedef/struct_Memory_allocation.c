#include <stdio.h>
#include <stdlib.h>
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

typedef struct Nums {
  int data1;
  int *arr;
} Nums;

void print_student(Student any) {
  printf("%s\nAge : %d\nGrade : %d\nTall : %dcm\n", any.name, any.age,
         any.grade, any.tall);
}

void age(Student *s) { s->age += 1; }

int main(void) {

  Nums other;
  other.data1 = 23;
  other.arr = malloc(5 * sizeof(int));

  for (int i = 0; i < 5; ++i)
    other.arr[i] = i * i;

  Nums two = other;

  other.arr[2] = 123;
  printf("\nYour data of other in another struct is :: \n");
  for (int i = 0; i < 5; i++)
    printf("two.arr[%d] = %d\n", i, two.arr[i]);

  printf("other : %p\n", other.arr);
  printf("two   : %p\n", two.arr);

  free(other.arr);

  return 0;
}


