#include<stdio.h>
int main(){
    int a[50],i,n ,sum=0;
    printf(" enter the array no:");
    scanf(" %d",&n);
    printf("\n enter element no::");
    for ( i = 0; i <n; i++)
    {
        scanf("\n %d",&a[i]);
        sum=sum+a[i];
        
    }
    printf("\n you have entered following \n ");
    for( i = 0; i<n; i++)
    {
       // printf("\n %d");
         if (a[i]%2==0)
        {
            printf("\n even no; %d",a[i]);
        }else{
            printf(" \n odd no %d",a[i]);
        }
    }
    printf("\n sum %d",sum);
    
    return 0;
}