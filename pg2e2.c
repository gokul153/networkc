#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
printf("\nWe are in E2");
//fork();
printf("Second\nPID=%d",getpid());
return 0;
}
