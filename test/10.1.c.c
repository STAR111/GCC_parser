/* 10.1 (c) non-constant integer type function argument implicitly converted to a different type */
#include <stdio.h>

char c = 'a';
short int w = -5;
int x = -6;
long int y = -7;

unsigned char uc = 255u;
unsigned short int uw = 5u;
unsigned int ux = 6u;
unsigned long int uy = 7u;

void f(int x) {
}

int main() {
  f(c); /* not complaint */
  f(w); /* not complaint */
  f(x); /* complaint */
  f(y); /* complaint, since [long int] here in 32 bit machine is the same as int */
  f((c >> 4) + c); /* not complaint */
  f(uw); /* not complaint */
  f(ux); /* not complaint */
  f(uy); /* not complaint */
  return 0;
}
