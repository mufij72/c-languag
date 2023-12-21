// wap to print n to 1 using do while loop
#include<stdio.h>
int main(){
    int i=1;
    printf("\n entre no:");
    scanf("%d",&i);
    do
    {
        printf("\n %d",i);
        i--;
    } while (i>=1);
    
    return 0;
}