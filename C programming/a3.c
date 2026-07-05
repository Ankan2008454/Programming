#include<stdio.h>
int main()
{
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("Enter a number: ");
            scanf("%d", &a[i][j]);
        }
    }
    int rs=0;
    int cs=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            rs=rs+a[i][j];
        }
        printf("Sum of row %d: %d\n", i, rs);
        rs=0;
    }
    for(int j=0;j<5;j++)
    {
        for(int i=0;i<5;i++)
        {
            cs=cs+a[i][j];
        }
        printf("Sum of column %d: %d\n", j, cs);
        cs=0;
    }
}