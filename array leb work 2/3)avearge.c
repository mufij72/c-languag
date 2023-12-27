#include<stdio.h>
int main(){
    int a[50],i,n,sum=0;
    float avg;
    printf("enter size of array :");
    scanf("%d",&n);
    printf("\n enter eleiment ");
    for ( i = 0; i < n; i++)
    {
   scanf("%d",&a[i]);
    }
     printf("\n you have enter following element :");
     for ( i = 0; i <n; i++)
     {
        sum=sum+a[i];
        
     //   printf("%d \n ",a[i]);
     }
     avg=(float)sum/n;
     printf("\n sum all ele,ent %d",sum,&a[i]);
      printf("\n avg all ele,ent %.2f",avg);
     
    return 0;
}