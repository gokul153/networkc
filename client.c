#include<stdio.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<netdb.h>
#include<strings.h>
int main()
{
int clientsocket,port;
struct sockaddr_in serveraddr;
socklen_t len;
char message[50];
clientsocket=socket(AF_INET,SOCK_STREAM,0);
bzero((char*)&serveraddr,sizeof(serveraddr));
len=sizeof(serveraddr);
serveraddr.sin_family=AF_INET;
printf("Enter the port number ");
scanf("%d",&port);
serveraddr.sin_port=htons(port);
printf("\nTrying to connect to the server.\n");
connect(clientsocket,(struct sockaddr*)&serveraddr,sizeof(serveraddr));
sendto(clientsocket,"HI I AM CLIENT...",sizeof("HI I AM CLIENT... "),0,(struct
sockaddr*)&serveraddr,sizeof(serveraddr));
printf("\nReceiving message from server.\n");
//receiving messages.
recvfrom(clientsocket,message,sizeof(message),0,(struct sockaddr*)&serveraddr,&len);
printf("\nMessage received:\t%s\n",message);
close(clientsocket);
}
