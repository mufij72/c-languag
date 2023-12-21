// wap sum 1 to n 
#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("\n enter sum :");
    scanf("%d",&n);
    do
    {
    sum +=i;
    i++;
    } while (i<=n);
    printf("\n sum %d",sum);
    
    return 0;
}