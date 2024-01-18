#include<stdio.h>
int divisible(int num){
    if ((num%3==0)&&(num %5==0))

    {
        printf("number id divisible by 3and 5");
    }else{
        printf("\n number is not ");
    }
    
}
void main(){
    int n;
    printf("\n enter n");
    scanf("%d",&n);
    divisible(n);
}