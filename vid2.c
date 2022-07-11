#include <limits.h>
#include <stdio.h>

int main() {
  int var = 9 + 9;
  int var1 = 8;
  short var2 = 5;
  printf("Sum    of two numbrs is %d \n", var + 4);
  printf("size of int : %lu\n", sizeof(int));
  int number = 0b1010;
  printf("%d\n", number);
  char x;
  int y = 12;
  x = (char)y;
  printf("%lu\n\n\n", sizeof(short int));

  // --------------------------------------------------
  // ! Range of Data Types

  /*

  ?1. sizeof (short) <= sizeof (int) <= sizeof (long).
  ?2. Writing signed int some_variable_name; is equivalent to writing int
  some_variable_name; ?3. %d is used to print "Signed Integer" ?4. %u is used to
  print "Unsigned integer" ?5. %ld is used to print "Long Integer" equivalent to
  "Signed Long Integer" ?6. %lu is used to print "Unsigned Long Integer" ?7.
  %lld is used to print "Long Long Integer" ?8. %llu is used ti print "Unsigned
  Long Long Integer"
  */

  int pak = INT_MAX;
  int pak2 = INT_MIN;
  printf("Range of  integer %d to %d\n", pak2, pak);

  unsigned int pak3 = UINT_MAX;
  unsigned int pak4 = 0;
  printf("Range of unsigned integer %u to %u\n", pak4, pak3);

  short int p = SHRT_MIN;
  short int p1 = SHRT_MAX;
  printf("Range of Short Integer is from  %d to %d \n", p, p1);

  short unsigned int py = 0;
  short unsigned int py2 = USHRT_MAX;
  printf("Range of Unsigned Short Integer is from %u to %u\n", py, py2);

  long long int l = LLONG_MIN;
  long long int l1 = LLONG_MAX;
  printf("Range of Long Long Integer is from %lld to %lld\n\n", l, l1);

  return 0;
}