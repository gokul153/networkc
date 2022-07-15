#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
main(int argc , char * argv[])
{
int pid;
pid = fork();
if(pid == 0) // child process
{
execv("/home/anil/NetworkLab/EXPT3/prog2", argv);
}
wait(NULL);
exit(0);
}
