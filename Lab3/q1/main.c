#include<stdlib.h>
#include<stdio.h>
#include"myMath.h"

void main(void)
{
	int a=0,b=0,c=0;
	printf("Enter 2 values for a and b: ");
	scanf("%d %d",&a,&b);

	c=isEqual(a,b);
	swap(&a,&b);

	printf("Equal status: %d",c);
	printf("\n");	
	printf("Value1:  %d\nValue2: %d",a,b);
	printf("\n\n");

}
