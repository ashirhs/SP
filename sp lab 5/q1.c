#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>


void main(void)
{
	printf("Real user id: %d\n",(long)getuid());
	printf("Effective user id: %d\n",(long)geteuid());
	printf("Real group id: %d\n",(long)getgid());
	printf("effective group id: %d\n",(long)getegid());
//real id is made when user is made
//effective user is when file is processed for permission check
//group id is user primary group
//effective is when gid bit is on and os check group for permission

}
