/* 10.2 */
#include <stdio.h>

char c = 'a';
short int w = -5;
int x = -6;
long int y = -7;

unsigned char uc = 45u;
unsigned short int uw = 5u;
unsigned int ux = 6u;
unsigned long int uy = 7u;

float f = 1.21f;
double d = 1.23;

double f1() {
  return f;  /* not complaint (d) */
}

void f2(double arg) {
}

int main() {
  char *s = "\\";
  char *t = "\1";
  f2(f);    /* not complaint (c) */
  d = f + f;/* not complaint (b) */
  f = d;    /* not complaint (a) */
  x = f;    /* not complaint (a) */
  return 0;
}
