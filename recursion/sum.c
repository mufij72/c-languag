//recursion = function call itself
#include<stdio.h>
//s=120
void dispno(int a){
         if (a<=10)
         {
           printf("\n %d",a);
          
           dispno(a+1);//dispno (1+1)
         }
         
}
int sum(int a){
    if (a<=10)
    {
        return a+sum(a+1);
    }
    else{
        return 0;
    }
    
}


void main(){
    int i=1;
    dispno(i);
    printf("\n sum of 10 no %d",sum(i));
}