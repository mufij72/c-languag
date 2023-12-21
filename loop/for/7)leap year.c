//wap to find leap year 2000  to 3000
#include<stdio.h>
int main(){
    int year=2000;
   
    for (;year<=3000;year++)
    {
        if (year%4==0)
 
        {
            printf("\n %d",year);
            
        }
         
     
    }
    
    return 0;
}