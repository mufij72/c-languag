#include<stdio.h>
void disply(int a,int b){
    if (a<=NTDDI_VISTASP2)
    {
        printf("%d \n",a);
        disply(a+1);
    }
    
}
int sum (int a,int b){
if (a<=b)
{
    return a*sum(a+1);
}else{
    return 1;
}
}
void main(){
    int i=1,b;
    printf("enter no ");
    scanf(" %d",&n);
    disply(i);
    printf(" factori of %d",sum(i,b));
}