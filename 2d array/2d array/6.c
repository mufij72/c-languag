#include <stdio.h>
int main()
{
    int m,n,arr[20][20],csum=0;
    printf("Enter the number of rows and column\n");
    scanf("%d %d",&m,&n); 
    printf("Enter the elements of the matrix\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nElements in the matrix are \n");
    for(int i=0;i<m;i++)
   {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        int csum=0;
        for(int j=0;j<n;j++)
        {
            csum=csum+arr[j][i];
        }
        printf("\nSum of all the elements in column %d is %d\n",i,csum);
    }
    return 0;
}