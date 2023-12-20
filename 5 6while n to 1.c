// wap to prnt odd and even numbur while loop
#include<stdio.h>
int main(){
       int i=1,n;
       printf("\n entre no:");
       scanf("%d",&n);
       while (i<=n)
       {
       if (i%2==0)
       {
        printf("\n even no %d",i);
       }
       if (i%2!=0)
       {
        printf("\n odd no %d",i);
       }
       i++;
       }
       
    return 0;
}