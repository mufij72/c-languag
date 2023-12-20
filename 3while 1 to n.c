// wap to printf 1 to n using while loop
#include<stdio.h>
int main(){
       int i=1,n;
       printf("\n enter no:");
       scanf(" %d",&n);
       while (i<=n)
       {
        printf(" \n %d ",i);
        i++;
       }
       
    return 0;
}