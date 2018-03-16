#include<stdlib.h>
#include<stdio.h>
#include"myStr.h"

void main(void)
{
	int status=0, size=10;
	char arr[11]="qwertyuiop";
	//printf("Enter string for palindrome: ");
	//scanf("%d %d",&a,&b);

	status=isPalindrome(&arr,size);
	//swap(&a,&b);

	printf("Palindrome status: %d",status);
	printf("\n");	
	//printf("Value1:  %d\nValue2: %d",a,b);
	//printf("\n\n");

}
