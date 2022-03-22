//write a code for take input in one file and print the output in unother file

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
int fd,fd1,len;
char buf[300];

fd = open("/home/ashruti/linux/Day-1/hello.txt",O_RDONLY);

if(fd<0)
{
printf("File is not opened");
return 0;
}

len = read(fd,buf,300);
fd1 = open("/home/ashruti//linux/Day-1/output.txt",O_CREAT|O_WRONLY,0755);

if(fd<0)
{
printf("File is not opened");
return 0;
}

write(fd1,buf,len);
close(fd);
close(fd1);
return 0;
}
