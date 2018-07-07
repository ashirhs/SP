#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char buffer[256];
	int fd2=0;
	int fd=open("/etc/passwd",0);
	fd2=dup(fd);
	
	read(fd2,buffer, 255);
	write(1,buffer,255);
	return 0;	
		
}
