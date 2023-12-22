// multiplication tabel of n 
#include<stdio.h>
int main(){
    int i=1,n;
    printf("\n enter the multipli tebel :");
    scanf("%d",&n);
    do
    {
        printf("\n %d*%d=%d",n,i,n*i);
    
        i++;
    } while (i<=10);
    
    return 0;
}