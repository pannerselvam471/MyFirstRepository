

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	char word[100];
	char word2[100]="Limit reached";
	int fd=open("/home/123.txt",O_RDWR);
	if(fd== -1)
	printf("Error encountered \n");
	else
		{
			printf("Successful \n");
			int nr = read(fd,word,100*sizeof(char));
			if(nr == -1)
			printf("Error encountered \n");
				else{
						printf("Successful \n");
						printf("Before the writing operating \n \n");
						printf("%s",word);
					}
			write(fd,word2,100*sizeof(char));
			printf("After the Write operation \n \n");
			read(fd,word,100*sizeof(char));
			printf("%s",word2);
}
}