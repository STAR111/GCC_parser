/* 10.1 (b) complex integer type expression implicitly converted to a different underlying type */
#include <stdio.h>

char c = 'a';
short int w = -5;
int x = -6;
long int y = -7;

unsigned char uc = 45u;
unsigned short int uw = 5u;
unsigned int ux = 6u;
unsigned long int uy = 7u;

char f() {
  return c;
}

int main() {
  x = c;     /* complaint */
  uc = 5u;    /* complaint */
  x = c + c; /* not complaint */
  x = ++c;   /* not complaint, but I can't check this, since GCC promote c to int first, and do not do converion when dealing with '='. One way to check this is to do conversion every time we meet '='.(And add underlying type transmission in unary expression building process) (and because of some unknown reason ++ is a binary op so it do give one) (now fixed) */
  c = c + c; /* complaint */
  c = ++c;   /* complaint, but I will give a wrong warning since I do not transmit underlying type in unary expression building process (and because of some unknown reason ++ is a binary op so it do not give one) (now fixed) */
  c = ~c;    /* complaint, but I will give a wrong warning for the same reason in the previous comment (now fixed) */
  ux = ++uc;  /* not complaint */
  x = f();  /* complaint */
  c + c - w; /* not complaint, people will think that c + c is still char type and will not excess -127 ~ 127, but the implicitly conversion (integer promotion) will alow the overflow and may cause some problem. But I can't check this currently since GCC do the integer promotion for each varible when building binary op expression, and to check the [underlying integer promotion] for a complex expression another integer promotion function according the underlying type is needed (and the code needed to do this is more than that I have time to write now) (Oh... I have done it in build_binary_op by compare the result_type with the op type) */
  w + c + c;  /* complaint */
  return 0;
}
