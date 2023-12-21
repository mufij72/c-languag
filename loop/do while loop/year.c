// wap to print leap year from 2000 to 3000 using
#include<stdio.h>
int main(){
    int i=2000,count=0;
    do
     { 
     if (i%4==0)
     {
        printf("\n %d",i);
        count++;
     }
     i++;
      } while (i<=3000);
      printf("\n total %d",count);
     
    
    return 0;
}