#include<stdio.h>
#include<string.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
int main()
{
	// FILE *fd = fopen("a.txt", "r+");
	// int num = 2;
	// char buf[30] = "";
	// num = fread(buf, sizeof(char), num, fd);
	// int len = *((int *)buf + 5);
	// printf("%d   %s\n",len,buf);
	// fclose(fd);
	int num=1;
	while(1)
	{
		sleep(1);
		printf("%d\n",num);
		if(num==1)
		{
			continue;
		}
		num++;
	}
	
	return 0;
}