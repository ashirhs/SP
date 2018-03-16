#include<stdlib.h>
#include<stdio.h>
#include"myMath.h"
#include"myStr.h"

void main(void)
{
	int a=0,b=0,c=0;
	printf("Enter 2 values for a and b: ");
	scanf("%d %d",&a,&b);

	int status=0, size=10;
	char arr[11]="qwertyuiop";


	c=isEqual(a,b);
	swap(&a,&b);

	printf("Equal status: %d",c);
	printf("\n");	
	printf("Value1:  %d\nValue2: %d",a,b);
	printf("\n\n");

	status=isPalindrome(&arr,size);

	printf("Palindrome status: %d",status);
	printf("\n");	

}
