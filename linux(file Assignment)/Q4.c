#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
int fd,len;
char r_buf[50];
creat("Q4.txt",0755);
char buf[50]="Q4 is all system calls in one program";
fd =open("Q4.txt",O_WRONLY);
len=write(fd,buf,50);

lseek(fd,0,SEEK_SET);
  read(fd,r_buf,len);
  printf("data from read option =%s",r_buf);

close(fd);

fd=open("Q4.txt",O_RDONLY);

read(fd,r_buf,len);
printf("%s\n",r_buf);
close(fd);
return 0;
}
