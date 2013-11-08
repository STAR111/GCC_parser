// Misra C Enforcement Testing
//
// Rule 2.1: Required
// Non ISO C characters.
///

#include "misra.h"

SI_32
rule5 ( void ) 
{
    
UC_8 c = 'a';
    
    switch ( c ) 
    {
        
        //
        // The official 91-character set.
        //
        // Checker should produce no messages.
        ///
        case 'A': case 'B': case 'C': case 'D': case 'E': case 'F':
        case 'G': case 'H': case 'I': case 'J': case 'K': case 'L':
        case 'M': case 'N': case 'O': case 'P': case 'Q': case 'R':
        case 'S': case 'T': case 'U': case 'V': case 'W': case 'X':
        case 'Y': case 'Z':
        
        case 'a': case 'b': case 'c': case 'd': case 'e': case 'f':
        case 'g': case 'h': case 'i': case 'j': case 'k': case 'l':
        case 'm': case 'n': case 'o': case 'p': case 'q': case 'r':
        case 's': case 't': case 'u': case 'v': case 'w': case 'x':
        case 'y': case 'z':
        
        case '0': case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9':
        
        case '!': case '"': case '#': case '%': case '&': case '\'': case ' ( ':
        case ' ) ': case '*': case '+': case ',': case '-': case '.':
        case '/': case ':': case ';': case '<': case '=': case '>':
        case '?': case '[': case '\\': case ']': case '^': case '_':
        case '{': case '|': case '}': case '~':
        
        case ' ': case '\t': case '\v': case '\f': case '\0':
        case '\a': case '\b': case '\n': case '\r': 
        break;
        //
        // An extended character.
        //
        // Checker should warn. ( Note cannot test for all eventualities,
        // there are simply too many, although the coding in the checker is
        // easy. If done correctly, one counter-example should be enough ) .
        ///
        case '\c': // RULE 52.1
        break;
        
        default:
        break;
        
    }
    
    return 1;
    

}

int main()
{
    rule5();
    return 0;
}
