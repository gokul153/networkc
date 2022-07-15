#include<sys/types.h>
#include<stdio.h>
int main()
{
     int pid_t,pid,pid1,p,p1;
     pid =fork();
     if( pid == -1)
      {
            print("enter in connection");
      }
      else if (pid == 0)
      {
             printf("\n child process1 :\n\n");
             p=getppid();
             printf("parent process id of child1: %d \n",p);
             p1=getpid();
	printf("Parent process id of child1: %d\n",p1);

     }
     else 
     {
               pid= fork();
       if(pid == 0)
       {
             printf("\n child process 2: \n \n");
             p=getppid();
		printf("Parent process id of child2: %d\n",p);
		p1=getpid();
		printf("Parent process id of child2: %\n",p1);
	}
        else
	{
		printf("This is parent process \n");
		p=getppid();
		printf("Grant parent: %d \n",p);
		p1=getpid();
		printf("Process id of parent: %d \n",p1);
	}
}
return 0;
}
            
      
