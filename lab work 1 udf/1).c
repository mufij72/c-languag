#include<stdio.h>
int cube(int a){
    return a*a*a;
}
void main(){
    int n;
    printf("\n enter the n:");
    scanf("%d",&n);
    printf("\n  cub is %d",cube(n));
}