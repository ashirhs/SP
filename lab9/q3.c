#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
#include<sys/types.h>
#include<unistd.h>
#include<time.h>


void myhandler1(int signum)
{
printf("Signal: %d\n,signum");
}

int main()
{

signal(SIGINT, &myhandler1);
signal(SIGFPE, &myhandler1);
signal(SIGQUIT, &myhandler1);
signal(SIGSTOP, &myhandler1);
signal(SIGHUP, &myhandler1);
signal(SIGKILL, &myhandler1);
while(1)
{
printf("I am loop!\n");
sleep(1);
}

return 0;
}
