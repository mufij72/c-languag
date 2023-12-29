#include<stdio.h>
int main(){
   
   int arr[30][30],i,j,row,col,sum = 0,antidiag=0,digonal=0;
   printf("enter the row&coloum : ");
   scanf("%d %d",&row,&col);
   printf("enter elements"); 
   
   for(i=0;i<row;i++){
    for(j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
     }
   
   }
   
   printf("\n entered elements are \n");
   for(i=0;i<row;i++){
      for(j=0;j<col;j++){
        printf("%d ",arr[i][j]);
        sum += arr[i][j];
        if( i + j ==2 ){
            antidiag += arr[i][j];
        }
         if(i==j){
            digonal += arr[i][j];
            }

      }
      printf("\n");
   }
   printf("\n antidiagonal is %d",antidiag);
   printf("\n diagonal is %d",digonal);
   printf("\n Cross-diagonal is %d",digonal+antidiag);

   return 0;
     
}