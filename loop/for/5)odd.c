// wap to print odd no 1 to n 
#include<stdio.h>
int main(){
    int i=1,n;
    printf("\n enter odd no:");
    scanf("\n %d",&n);
    for (;i<=n;i++)
    {
        if (i%2!=0)
        {
            printf("\n %d",i);
        }
        
    }
    
    return 0;
}