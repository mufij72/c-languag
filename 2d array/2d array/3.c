#include<stdio.h>

int main() {
    int a[20][20], i, j, m, n, sum = 0;
    float avg, count;

    printf("Enter row & column:");
    scanf("%d %d", &m, &n);

    count = m * n;

    printf("\n Enter matrix: ");
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            sum += a[i][j];
        }
    }
    float avg = (float)sum / count;
    printf("The average of the 2D array is: %.2f\n", avg);

    return 0;
}
