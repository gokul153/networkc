#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
//fork();
printf("\nFF\nPID=%d",getpid());
char *args[]= {"Hello","ss","fff",NULL};
execv("./f2",args);
printf("\nBackto e1.c");
return 0;
}
