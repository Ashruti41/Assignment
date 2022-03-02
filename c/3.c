#include<stdio.h>

int main()
{
    int arr[10]={1,5,4,8,9,2,0,6,11,7};
    int size,i,search,flag;
 
    printf("Enter the serch element: ");
    scanf("%d",&search);
    flag = 0;
    for(i=0; i<10;i++)
    {
        if(arr[i]==search)
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    printf("\nElements in array is:");
    for(i=0; i<10;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
