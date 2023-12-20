//for 3 using ternari opretar
#include<stdio.h>
int main(){
     int a,b,c;
     printf("\n entre a b c :");
     scanf("%d %d %d",&a,&b,&c);
      
      (a>b)?(a>c)?printf("\n a ismax"):printf("\n c is max"):
      (b>c)?printf("\n b is max "):printf("\n c is max ");

    return 0;
}