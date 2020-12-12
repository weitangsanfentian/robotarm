#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netinet/ip.h> 

int main()
{
	//char user[32] = "qwer12345";
	//char pa[32] = "123456";

	int sockfd = socket(AF_INET,SOCK_STREAM , 0);  //AF_INET:IPv4   SOCK_STREAM:流式套接字
	if(sockfd == -1)
	{
		perror("socket"); //打印错误信息
		return -1;   //错误返回
	}
	

	struct sockaddr_in seraddr;
	seraddr.sin_family =  AF_INET;
	seraddr.sin_port =  htons(8888);
	seraddr.sin_addr.s_addr = inet_addr("0.0.0.0");

	if(bind(sockfd, (struct sockaddr*)&seraddr, sizeof(seraddr)) == -1)
	{
		perror("bind");
                return -1;
	}
	
	if(listen(sockfd, 5) == -1)
	{
		perror("listen");
		return -1;
	}
	
	printf("listen----\n");

	int connfd;    //通信套接字.

	connfd = accept(sockfd, NULL, NULL);
	if(connfd == -1)
	{
		perror("connfd");
		return -1;
	}
	printf("accept-----\n");

	int i = 0;

	while(1)
	{

		char cmd[5] = {0};

		read(connfd, cmd, sizeof(cmd));

		for(i = 0; i < 5; i++)
		{
			printf("%#x ", cmd[i]);
		}

		
#if 0
		char name[32] = {0};
		char passwd[32] = {0};	
		read(connfd, name, 32);
		printf("recv:%s\n", name);
		read(connfd, passwd, 32);

		if((strcmp(name, "qwer1234") == 0) && (strcmp(passwd, "123456") == 0))
		{
			write(connfd, "ok", 3);
			printf("登录成功!!\n");
		}
		else
		{
			write(connfd, "no", 3);
			printf("登录失败!\n");
		}
		//write(connfd, "sb", 3);
#endif
	}

	close(sockfd);
	return 0;   //正确返回
}
