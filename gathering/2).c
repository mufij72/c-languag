#include<stdio.h>
int main (){
    int new_sum=0,n,i;
    print("enter size ");
    scanf("%d",&n);
    new_sum=sum_element(n);
    printf("sum of element %d",new_sum);
    return 0;
}
int sum_element(int n)
{
    int a[n],i;
    printf("entre element \n");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    int sum=0;
    for ( i = 0; i < n; i++)
    {
         scanf("%d",&a[i]);
    }
    return 0;
}