//  even numbar nto 1
#include<stdio.h>
int main(){
int i=1,n;
printf("\n enter odd no");
scanf("%d \n",&n);
do
{
    if (i%2==0)
    {
        printf("\n %d",i);
        
    }
    i--;
} while (i>=1);


    return 0;
}