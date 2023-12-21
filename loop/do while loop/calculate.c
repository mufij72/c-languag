// wap to calcuate the factor n.using 
#include<stdio.h>
int main(){
    int i=1,n,mult=1;
    printf("\n enter sum");
    scanf("\n %d",&n);
    do
    {
        mult*=i;
        i++;
    } while (i<=n);
    printf("\n mult  %d",mult);
    
    return 0;
}