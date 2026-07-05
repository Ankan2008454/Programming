#include<stdio.h>
int main()
{
    int r1, c1;
    printf("Enter number of rows and column of matrix A");
    scanf("%d %d", &r1, &c1);
    int a[r1][c1];
    int i, j, k;
    printf("Enter values of matrix A");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int r2, c2;
    printf("Enter number of rows and column of matrix B");
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];
    printf("Enter values of matrix B");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    int r[c1][r2];
    if(c1!=r2)
    {
        printf("Matrix multiplication not possible");
        return 0;
    }
    else
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                r[i][j]=0;
                for(k=0;k<r2;k++)
                {
                    r[i][j]=r[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<c1;i++)
        {
        for(j=0;j<r2;j++)
            {
            printf("%d ", r[i][j]);
        }
        printf("\n");
        }
    }
}