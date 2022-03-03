#include<stdio.h>
#include<stdlib.h>

void binary_number(int n)
{
    int bin_number[1000];
    int i = 0;
    while(n>0)
    {
        bin_number[i] = n % 2;
        n = n / 2;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    printf("%d",bin_number[j]);
    printf("\n");
}

void binary_number_generation(int n)
{
    for(int i=0; i<=n; i++)
    {
        binary_number(i);
    }
}

int main()
{
    int n;
    printf("Enter the end value: ");
    scanf("%d",&n);
    printf("Binary numbers from 1 to %d: ",n);
    printf("\n");
    binary_number_generation(n);
    return 0;
}
