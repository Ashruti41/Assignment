#include<stdio.h>
#include<unistd.h>

int main()
{
   printf("Pstree program resulting current running process in herarechical format\n");
   
   execl("/bin/pstree","pstree",0);

   printf("i executed ls program");
   printf("\ni executed ls program");
   printf("\ni executed ls program");
 
  return 0;
}
