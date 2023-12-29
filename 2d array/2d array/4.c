#include<stdio.h>
int main(){
   int i,j,row,col,sum=0,t[20][20];
   printf("enter row & coloum : ");
   scanf("%d %d",&row,&col);
   printf("enter elements");
    
   for(i=0;i<row;i++){
      for(j=0;j<col;j++){
        scanf("%d",&t[i][j]);
      }
   }
   printf("\n enterd elements are \n");
      for(i=0;i<row;i++){
         for(j=0;j<col;j++){
         printf("%d ", t[j][i]);
         sum += t[j][i];
         }
         printf("\n");
      }
      printf("\n sum is %d",sum);
    return 0;
}