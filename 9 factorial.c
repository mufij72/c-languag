// wap to calcute the factorial n
#include<stdio.h>
int main ()
{
    int i=1,n,mult=1;
    printf("\n enter no: ");
    scanf("%d",&n);
    while (i<=n)
    {
        mult *=i;
        i++;
    }
    printf("\n mult %d",mult);
    return 0;
}