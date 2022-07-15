#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
void fib(void *p1)
   {
     int a=0,b=1,c;
     int i,L;
    printf("\n Enter the limit");
    scanf("%d",&L);
    printf("Fibonoic series is \n");
    printf("%d  \t %d",a,b);
   for( i=2;i<=L;i++)
    {
      c=a+b;
      a=b;
      b=c;
      printf("\t%d",c);
    }
}
void prime(void *p2)
{
  int n,i=2;
  int c1,j;
   printf("\n Enter the limit \n");
   scanf("%d",&n);
   printf("\n Prime numbers are");
   while(i<=n)
  {
     if(i==2)
       {
       printf("%d \t",i);
       i++;
       }
     else 
      {
        c1=0;
        for(j=1;j<=1;j++)
        {
           if(i%j==0)
            {
             c1++;
            }
         }
         if(c1==2) 
          {
             printf("%d\t",i);
             i++;
           }
         else 
           {
            i++;
           }
        }
     }
  }
 
  
 void main()
{
pthread_t p1,p2;
pthread_create(&p1,NULL,(void*) &fib,NULL);
pthread_join(p1,"NULL");
pthread_create(&p2,NULL,(void*) &prime,NULL);
pthread_join(p2,NULL);
}
     
