#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

int main()
{
   printf("Can you See me[one]\n");

   execl("/home/ashruti/Assignment/Linux/exectest","./exectest","linux"," ","kernel",NULL);

   
   printf("Can you see me[two]\n");
}
