// wap to print 1 to 10 using do whili loop
#include<stdio.h>
int main(){
    int i=1,n;
     printf("\n enter no:");
     scanf("\n %d",&n);
    do
    {   
        printf("%d \n",i);
        i++;
    } while (i<=n);
    
    return 0;
}