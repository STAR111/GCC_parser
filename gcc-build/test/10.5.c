/* 10.5 well, there remains some problem in rule 10.3, so when testing this rule we should close 10.3 */
#include <stdio.h>

unsigned char uc1 = 0x5aU;
unsigned char uc2;
unsigned char uc3;
unsigned char uc4;
unsigned char uc5;

int main() {
  uc2 = ~uc1 >> 4; /* not complaint, uc2 will be 0xfa instead of 0x0a */
  uc3 = ((unsigned char) ~uc1) >> 4; /* complaint */
  uc4 = (uc1 << 4) >> 4; /* not complaint, uc2 will be 0x5a instead of 0x0a */
  uc5 = ((unsigned char) (uc1 << 4)) >> 4; /* complaint */
  printf("0x%x 0x%x 0x%x 0x%x\n", uc2, uc3, uc4, uc5);

  uc2 = ~uc1; /* complaint, but the "No cast is required" case is not realizedso it will give a warning here */
  uc3 = uc1 << 4; /* complaint, currently it should give a warning but since I only checked (A << B) with (), it will not give a warning here */
  printf("0x%x 0x%x\n", (uc1 << 4) + 1, ((unsigned char) (uc1 << 4)) + 1);
  printf("0x%x 0x%x\n", ~(uc1 << 8), ~(unsigned char) (uc1 << 8));
  return 0;
}
