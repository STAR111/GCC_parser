/* 10.1 (d) non-constant integer type return expression implicitly converted to a different type */
#include <stdio.h>

char c = 'a';
short int w = -5;
int x = -6;
long int y = -7;

unsigned char uc = 56u;
unsigned short int uw = 5u;
unsigned int ux = 6u;
unsigned long int uy = 7u;

float f0() {
  return x; /* not complaint */
}

char f1() {
  return x; /* not complaint, if x = 1000, f1() will return an unexecpted number */
}

short int f2() {
  return x; /* not complaint */
}

int f3() {
  return x; /* complaint */
}

long int f4() {
  return x; /* complaint, int 32 bit machine [long int] and [int] are the same */
}

unsigned char f5() {
  return x; /* not complaint */
}

unsigned short int f6() {
  return x; /* not complaint */
}

unsigned int f7() {
  return x; /* not complaint */
}

unsigned long int f8() {
  return x; /* not complaint */
}

int main() {
  printf("f0(): %f\n", f0());
  printf("f1(): %d\n", f1());
  printf("f2(): %d\n", f2());
  printf("f3(): %d\n", f3());
  printf("f4(): %d\n", f4());
  printf("f5(): %d\n", f5());
  printf("f6(): %d\n", f6());
  printf("f7(): %d\n", f7());
  printf("f8(): %d\n", f8());
  return 0;
}
