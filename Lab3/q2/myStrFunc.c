#include<stdio.h>
int isPalindrome(char *arr, int size)
{
	int s=size/2;
	//printf("%d",size);
	for(int i=0,j=10;i<=s,j<=0;i++,j--)
	{
		printf("aaa");
		printf("%c %c",arr[i],arr[j]);
		if(arr[i] != arr[j])
		{
			printf("%c %c",arr[i],arr[j]);
			return -1;
		}

		//printf("%c %c",arr[i],arr[i]);
		//for(int j=size-1;j=0;j--)
		//{
			//printf("%c %c",arr[i],arr[j]);
			
		//}
	}
	return 1;
}
