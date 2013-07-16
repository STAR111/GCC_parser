/* 10.1 (a) integer type expression implicitly converted to a narrower or different signness underlying type */
#include <stdio.h>

char c = 'a';
short int w = -5;
int x = -6;
long int y = -7;

unsigned char uc = 56u;
unsigned short int uw = 5u;
unsigned int ux = 6u;
unsigned long int uy = 7u;

int main() {
  c = w;     /* not complaint */
  w = x;     /* not complaint */
  c = uc;    /* not complaint */
  uc = c;    /* not complaint */
  return 0;
}
