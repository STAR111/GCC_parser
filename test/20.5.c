/*Misra C 2004
Rule 20.5: The error indicator errno shall not be used */

#include<stdio.h>
#include<errno.h>
 
int main ()
{
   FILE *fp = fopen("whatever.txt","r");
 
    if(fp ==NULL)
    {
        printf("Can not open file\n");
 
        printf("errno value: %d, it means: %s",errno, strerror(errno));
    }
 
    return 0;
}
