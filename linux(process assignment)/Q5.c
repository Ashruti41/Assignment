#include<stdio.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/wait.h>

int main()
{
   pid_t pid1;
   pid1 = fork();

    if(pid1 ==0)
    {
       int n;
       char buff[200];
       int fd;
       fd= open("vfork.c",O_RDWR);
       printf("filedsc = %d\n",fd);
    
       printf("\t justStarted: Process %d \n",getpid());
       n = read(fd,buff,200);

       printf("data read from file= %s\n",buff);
       printf("%s: \t Finished: \t For Process %d \n",getpid());
    }

    else{
      int pid2;
      printf("I am parent pro pid=%d\n",getpid());

      pid2 = wait(0);
  
      printf("parent saying.. child %d exited/terminated normally\n",pid2);
      printf("i am parent process pro pid=%d\n",getpid());
  
       }
  return 0;
}
