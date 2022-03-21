#include<stdio.h>
#include<unistd.h>

int main()
{
   pid_t child_a, child_b;
   child_a = fork();
  
   if(child_a == 0)
    {
       printf("Child A pid= %d\n",getpid());
    }

   else{
    
       child_b = fork();
       
   if(child_b ==0)
    {
       printf("Child B pid=%d\n",getpid());
    }
   else
    {
       printf("Parent pid = %d\n",getpid());
     }
 }
}

