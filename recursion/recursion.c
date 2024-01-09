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



void main(){
    int i=1;
    dispno(i);
}