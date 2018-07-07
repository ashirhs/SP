#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main(void)
{
	char buffer[256];
	int fd2=0;
	
	int fd=open("/etc/passwd",0);
	
	close(1);
	close(2);	
	int fd1=open("errorAndoutput.txt",O_CREAT|O_WRONLY);	
	dup(fd1);
		
	//fd2=dup(fd);
	
	//read(fd2,buffer, 255);
	write(fd1,buffer,255);
	return 0;	
		
}
