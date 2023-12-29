#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n,sum=0;
    printf("Enter row & column:");
    scanf("%d %d",&m,&n);

    printf("\n Enter matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }   
    }

    printf("Enterd matrix...\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
            sum =sum +a[i][j];
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n sum of digonal elements are %d:",sum);
    return 0;
}