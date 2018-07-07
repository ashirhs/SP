#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
int fd[2];
pipe(fd);
pid_t cpid = fork();
//child code (ls program giving output to the write end of pipe)

if (cpid == 0)
{
	int fd1[2];
	pipe(fd1);
	int cpid1=fork();
	if(cpid1==0)
	{
		close(fd1[0]);
		close(1);
		dup(fd1[1]);
		execlp("man","man ls","ls",NULL);
	}
	else
	{
		wait(NULL);
		close(fd1[1]);
		close(0);
		dup(fd1[0]);
		close(1);
		dup(fd[1]);
		close(fd[0]);
		execlp("grep","grep","ls",NULL);
	}
}
else
{
	wait(NULL);
	close(fd[1]);
	close(0);
	dup(fd[0]);
	execlp("wc","wc","-l",NULL);
}
return 0;
}

