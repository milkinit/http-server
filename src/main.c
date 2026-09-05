#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include "request.h"

#define PORT 8081

int main()
{
	// Socket Initialization
	int server_socket,client_socket;
	struct sockaddr_in server_addr,client_addr;
	socklen_t addr_len=sizeof(client_addr);
	server_socket=socket(AF_INET,SOCK_STREAM,0);
	if(server_socket==-1)
	{
		perror("Socket Failed");
		exit(EXIT_FAILURE);
	}
	// Server IP Initialization
	server_addr.sin_family=AF_INET;
	server_addr.sin_addr.s_addr=INADDR_ANY;
	server_addr.sin_port=htons(PORT);
	
	if(bind(server_socket,(struct sockaddr *)&server_addr,sizeof(server_addr))<0)
	{
		perror("Bind Failed");
		exit(EXIT_FAILURE);
	}
	
	if(listen(server_socket,10)<0)
	{
		perror("Listen Failed");
		exit(EXIT_FAILURE);
	}
	printf("Listening on port %d\n",PORT);
	// Waiting for connection
	while(1)
	{
		//
		client_socket=accept(server_socket,(struct sockaddr *)&client_addr,&addr_len);
		if(client_socket<0)
		{
			perror("Accept Failed");
			continue;
		}
		handle_request(client_socket);
	}
	close(server_socket);
	return 0;
}
