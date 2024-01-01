#include<stdio.h>
    int main(){

        int arr[50][50],n,m,i,j,diag;
        
        printf("\nEnter Row: ");
        scanf("%d",&m);
        printf("\nEnter Coulmn: ");
        scanf("%d",&n);
        printf("\nEnter your Elements:");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }

        printf(" Matrix is \n");
         for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
        
        
         for (i=0;i<m;i++){
            for (j=0;j<n;j++){
               if(i==j){
                   diag += arr[i][j];
               }
            }
        }
        printf("diagonal are %d",diag);

        return 0;
        
}    