#include<stdio.h>
int main(){
    int i= 1,n,mult=1;
    printf("\n enter no :");
    scanf("%d",&n);
     do
    {
        mult*=i;
        i++;
    } while (i<=n);
    printf("\n mult  %d",mult);

    return 0;
}
