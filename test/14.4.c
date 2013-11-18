/*MISRA_C_2004 rule 14.4: The goto statement shall not be used.*/

#include<stdio.h>
int main(void)
{
	int n=0;
	printf("input a string £º\n");
	loop: if(getchar()!='\n')
	{
	n++;
	goto loop;
	}
	printf("%d",n);
	return 0;
}
