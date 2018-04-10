#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>


void main(void)
{
	int i=54, cpid=-1, status;
	cpid=fork();
	if (cpid == -1)
	{
		printf("Fork failed\n");
		exit(i);
	}
	if (cpid == 0)
	{
		printf("child: PID: %ld\n",(long)getpid());
		printf("child: PPID: %ld\n",(long)getppid());
	
	}
	else
	{
		wait(&status);
		printf("Parent: PID: %ld\n",(long)getpid());
		printf("Parent: PPID: %ld\n",(long)getppid());
		
	}
        exit(1);
//effective user is when file is processed for permission check
//group id is user primary group
//effective is when gid bit is on and os check group for permission

}
