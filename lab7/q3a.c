#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char* argv[], char * env[] )
{
	char buffer[256];
	int n;
	int fd=open("newFile.txt", 1);
	for(;;)
	{	
		n=read(0,buffer,256);
		if(n<=0)
			exit(-n);
		write(fd,buffer,n);
	}	
	return 0;
}

