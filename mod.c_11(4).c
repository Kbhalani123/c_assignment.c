/* C Program to Print Even Numbers from 1 to N using For Loop and If */
 
#include<stdio.h>
 
int main()
{
  	int i, number;
 
  	printf("\n Please Enter the Maximum Limit Value : ");
  	scanf("%d", &number);
  
  	printf("\n Even Numbers between 1 and %d are : \n", number);
  	for(i = 1; i <= number; i++)
  	{
    	if ( i % 2 == 0 ) 
    	{
  			printf(" %d\n", i);
    	}
  	}
 
  	return 0;
}