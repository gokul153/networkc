#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/types.h>
  #include <sys/wait.h>
void main(int argc , char * argv[])
{
int pid;
pid = fork();
if(pid == 0) // child process
{
execv("/home/hp-10/Documents/goknetwork", argv);
}
printf("not parent process");
wait(NULL);
exit(0);
}

