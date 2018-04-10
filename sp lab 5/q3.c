#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>


void main(void)
{
	uid_t ruid, euid, suid; 
	gid_t rgid, egid, sgid;

	getresuid(&ruid, 1002, &suid);
	printf("My Real user-ID is: %d\n", (long)ruid);
	printf("My Effective user-ID is: %d\n", (long)euid); 
	printf("My Saved Set-user-ID is: %d\n", (long)suid); 		
	int rv = setuid(501);
	if (rv != -1)
	{
	getresuid(&ruid, &euid, &suid);
	printf("My Real user-ID is: %d\n", (long)ruid);
	printf("My Effective user-ID is: %d\n", (long)euid); 
	printf("My Saved Set-user-ID is: %d\n", (long)suid); 		}
//real id is made when user is made
//effective user is when file is processed for permission check
//group id is user primary group
//effective is when gid bit is on and os check group for permission

}
