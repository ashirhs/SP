#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include<sys/wait.h>

#define SIZE 1024
int main(){
int fd[2];
int rv = pipe(fd);
pid_t cpid = fork();
if (cpid == 0){ //child code (child is reader process)
close(fd[1]);
char buff[SIZE];
memset(buff, '\0',SIZE);
int n = read(fd[0],buff,SIZE);
printf("Message sent from parent is: \n");
write(1,buff,n);
printf("Child exiting");
exit(0);
}
else{
//parent code (parent is writer process)
close(fd[0]);
const char * msg = "Bye Bye Child\n";
write(fd[1], msg,strlen(msg));
wait(NULL);
printf("\nParent exiting.\n");
exit(0);
}}



