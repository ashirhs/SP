#include<stdio.h>
//#include<stdlib.h>
#include<signal.h>
//#include<sys/types.h>
//#include<unistd.h>
//#include<time.h>


int main()
{
signal(SIGINT,SIG_IGN);
signal(SIGFPE,SIG_IGN);
signal(SIGQUIT,SIG_IGN);
signal(SIGSTOP,SIG_IGN);
signal(SIGHUP,SIG_IGN);
signal(SIGKILL,SIG_IGN);

while(1)
{
printf("I am groot!");
//sleep(1);
}
return 0;
}
