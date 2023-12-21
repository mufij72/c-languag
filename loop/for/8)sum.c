// sum 
#include<stdio.h>
int main(){
    int i=1,n,sum=0;
     printf("\n enter no: ");
     scanf(" %d",&n);
     for (;i<=n;i++)
     {
        sum+=i;
     }
     printf("\n sum %d",sum);
    return 0;
}