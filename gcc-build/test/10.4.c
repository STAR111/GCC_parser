// Misra C Enforcement Testing
//
// Rule 45: Required
// Type casting from any type to or from pointers shall not be used.
///

#include "misra.h"

int rule45 ( void ) 
{
  float f = 3.0;
  return (int) (f + 1.21);
}

int main()
{
	return 0;
}

