#include<stdio.h>
void add(int p ,int q){
    printf("\n addition %d",p+q);
    sub(p,q);

}
void sub(int p ,int q){
    printf("\n mins %d",p-q);
    mult(p,q);
    
}
void mult(int p ,int q){
    printf("\n mult %d",p*q);
    divaid(p,q);
    
}
void divaid(float p ,float q){
    printf("\n divadid %.2f",p/q);
    
}
void main(){
    int a,b;
    printf("\n enter the a&b :");
    scanf("%d %d",&a,&b);
    add(a,b);
}