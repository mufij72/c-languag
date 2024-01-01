#include<stdio.h>
int main()
{
    int arr[50],i,n;

    printf("enter size:");
    scanf("%d",&n);
    printf("\nenter elements:");
    for(i=0;i<n;++i)
     {
        scanf("%d",&arr[i]);
     }

     printf("nagetive  elements are :");
     for ( i=0;i<n;i++)
       if(arr[i]<0)
         {
            printf("%d ",arr[i]);
         }
  

    return 0;
}