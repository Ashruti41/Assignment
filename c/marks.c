//code for find student 3 subject marks total and percentage

#include<stdio.h>
void func(int a,int b,int c,int *total,float *per);                       //function

void main()
{
    int a,b,c,total;
    float per;
    
    printf("Enter the marks of subject 1: ");
    scanf("%d",&a);
    printf("Enter the marks of subject 2: ");
    scanf("%d",&b);
    printf("Enter the marks of subject 3: ");
    scanf("%d",&c);
    
    func(a,b,c,&total,&per);
    
    printf("\nThe Average: %d",total);
    printf("\nThe Percentage: %.2f",per);
}

void func(int a,int b,int c,int *total,float *per)
{
    *total = a+b+c;
    *per = ((a+b+c)/300.0)*100;
}
