#include<stdio.h>
int main(){
          int x,y,z;
          printf("entar the value a");
          scanf("\n %d",&x);
          printf("entar the value b");
          scanf("\n %d",&y);
          printf("entar the value c");
          scanf("\n %d",&z);
            
        if (x>y && x>z){
              printf("\n x is maxim");
           
            
            } else if (y>z){
              printf("\n y is maxim");
        }else{
             printf("\n z is maxim");

        }
        

     return 0;
}