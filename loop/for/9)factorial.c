//wap to calculate the factoral of n
#include<stdio.h>
int main(){
    int i=1,n,mult=1;
    printf("\n enter no:");
    scanf("\n %d",&n);
    for(;i<=n;i++)
    {
        mult*=i;
    }
    printf("\n mult %d",mult);
    
    return 0;
}