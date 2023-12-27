#include<stdio.h>
int main(){
    int a[50],b[50],c[50],i,n,m,k=0,total ,sum=0;
     printf(" enter the size array no 1:");
     scanf(" %d",&m);
    printf(" enter element no::\n");
    for ( i = 0; i <m; i++)
    {
        scanf("\n %d",&a[i]);
       
        
    }
     printf(" enter the size array no 2:");
     scanf(" %d",&n);
     printf(" enter element no:: \n");
    for ( i = 0; i <n; i++)
    {
        scanf("\n %d",&b[i]);
        
    }
    total=m+n;
    for ( i = 0; i <m; i++)
    {
        c[i]=a[i];
    }
    for ( i = m; i <total; i++)
    {
         c[i]=b[k];
         
         k++;
    }
    printf(" after merge array element ");
    for ( i = 0; i<total; i++)
    
    {
        printf("%d",c[i]);
        sum=sum+c[i];
    }
    printf(" \n sum %d",sum);
    return 0;
}