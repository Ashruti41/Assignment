#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
   int fd;
   fd = open("./exec1",O_RDONLY);
   printf("in test3 fd = %d\n",fd);
 }
