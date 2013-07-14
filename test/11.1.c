// Misra C Enforcement Testing
//
// Rule 45: Required
// Type casting from any type to or from pointers shall not be used.
///

#include "misra.h"

SI_32
rule45 ( void ) 
{
    
SI_32 c = 3;
    
SI_32 *pc = &c;
SI_16 *pj;
    
    pj = ( SI_16 * ) c;		// RULE 45 
    pc = ( SI_32 * ) pj;	// RULE 45 
    c = ( SI_32 ) pc;		// RULE 45 
    
    return c;
    
}

int main()
{
	return 0;
}

