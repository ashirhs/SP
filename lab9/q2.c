#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/types.h>
#include<unistd.h>
#include<time.h>


int main()
{

pid_t cpid=fork();
if(cpid == 0)
while(1)
{
printf("I am child\n");
sleep(1);
}
else
sleep(5);
kill(cpid,SIGINT);
printf("Child is killed!\n");

return 0;
}
