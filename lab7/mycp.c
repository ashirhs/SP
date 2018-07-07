
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char* argv[], char * env[] )
{
	char buffer[256];
	int fd=open(argv[1], 0);
	int fd1=read(fd,buffer, 256);
	int fd2=open(argv[2], 1);
	int fd3=write(fd2,buffer,fd1);
	close(fd);
	close(fd2);
	return 0;
}

