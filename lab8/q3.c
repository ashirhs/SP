#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main(void)
{
	//char buffer[256];
	//close(1);
	//int fd=open("f1.txt",1);
	//close(2);
	//dup2(2,1);
	//close(0);	
	//int fd1=open("f2.txt",0);	
	//read(fd1,buffer, 255);
	//write(fd,buffer,255);

	dup2(2,1);
	close(1);
	int fd1=open("f2.txt",1);
	close(0);
	int fd=open("f1.txt",0);
	read(fd,buffer, 255);
	write(fd1,buffer,255);

	close(0);
	int fd1=open("f1.txt",0);
	dup2(2,1);
	int fd=open("f2.txt",1);
	read(fd1,buffer, 255);
	write(fd,buffer,255);
	return 0;	

	
	
}
