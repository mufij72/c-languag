// wap to printf 1 to 10 using while loop
#include<stdio.h>
int main(){
  // no=5
  //5*1=5
  //5*2=10
  int i=1,n;
  printf("\n enter no ;");
  scanf("%d",&n);
  while(i<=10)
  
  {
    printf("%d * %d = %d\n",n,i,n*i);
    i++;
  }
  
return 0;


}