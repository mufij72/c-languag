#include<stdio.h>
int main()
{
    int arr[50],i,n,max;

    printf("enter size:");
    scanf("%d",&n);
    printf("\nenter elements:");
    for(i=0;i<n;++i)
     {
        scanf("%d",&arr[i]);
     }

     max=arr[0];

    
     for(i=0;i<n;++i)
       {
         if(arr[i]>max)
           {
             max=arr[i];
           }
       }
    printf("\n the max no is :%d ",max);
    return 0;
}