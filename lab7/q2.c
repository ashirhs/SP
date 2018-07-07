#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char* argv[], char * env[] )
{
	//system("sudo chmod u+s /etc/shadow");
	char buffer[256];
	int fd=open("/etc/shadow", 0);
	int fd1=read(fd,buffer, 256);
	int fd2=open(argv[1], 1);
	int fd3=write(fd2,buffer,fd1);
	close(fd);
	close(fd2);
	return 0;
}

