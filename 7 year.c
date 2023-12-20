// wap to find leap year from 2000 to 3000 using while loop
#include<stdio.h>
int main(){
int i=1,n,year=2000,count=0;
printf("\n enter no:");
scanf("%d",&n);
while (year<=3000)
{
    if (year%4==0)
    {
        printf("\n leap year -%d",year);
        count++;
    }
    year++;
}
printf("\n total leo year is %d",count);

     
    return 0;
}