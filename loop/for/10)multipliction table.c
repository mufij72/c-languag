// wap to multipliction table of n
#include<stdio.h>
int main(){
    int i=1,n;
    printf("\n enter no:");
    scanf("\n %d",&n);
    for(;i <=10;i++)
    {
        printf("\n %d*%d=%d",n,i,n*i);
    }
    
    return 0;
}