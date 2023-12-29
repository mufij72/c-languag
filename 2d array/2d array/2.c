#include <stdio.h>

int main() {
    int a[20][20],m,n,i,j;
    
    printf("Enter the number of rows & columns: ");
    scanf("%d %d", &m,&n);

    printf("\n Enter matrix: ");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enterd matrix...\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    printf("Number of rows: %d\n", m);
    printf("Number of columns: %d\n", n);

    return 0;
}
