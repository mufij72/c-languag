// wap to print sum 1 to n 
#include<stdio.h>
int main (){
    int i=1,n,sum=0;
    printf("\n entre no:");
    scanf("%d",&n);
    while (i<=n)
    {
        sum +=i;
        i++;

    }
    printf("\n %d sum ",sum);
    
    return 0;
}