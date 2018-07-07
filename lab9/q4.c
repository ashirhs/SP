#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/types.h>
#include<unistd.h>
#include<time.h>

int main()
{
sigset_t newset, oldset;
sigemptyset(&newset);
sigaddset(&newset,SIGINT);

sigprocmask(SIG_SETMASK,&newset,&oldset);
int i=0;
for(i=1;i<=5;i++)
{
printf("loop: newset.\n");
sleep(1);
}

sigprocmask(SIG_SETMASK, &oldset, NULL);
for(i=0;i<10;i++)
{
printf("loop: oldset.\n");

}
return 0;
}
