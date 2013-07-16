// Misra C Enforcement Testing
//
// Rule 19.4: Required
// C macros shall only be used for symbolic constants, function-like
// macros, type qualifiers and storage class specifiers.
///

#define PI 4 
#define SQR ( x ) (  ( x ) * ( x )  ) 
#define IMPORT extern 

#define SINT_32 long // RULE 90 
#define BEGBLOCK {
    // RULE 90 
    #define STARTIF if ( // RULE 90 
    
    static void
func90a ( void ) 
    {
        
        
    }
