#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n;
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
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}