// tarnari opretar 4 
#include<stdio.h>
int main(){
          int a,b,c,d;
          printf("\n enter a,b,c,d");
          scanf("%d %d %d %d",&a,&b,&c,&d);
          (a>b)?(a>c)?(a>d)?printf("\n a is max"):printf("\n d is max"):
          (c>d)?printf("\n c is max "):printf("\n d is max "):
          (b>c)?(b>c)?printf("\n b is max"):printf("\n d is max"):
          (c>d)?printf("\n c is max"):printf("\n d is max");
    return 0;
}