#include <stdio.h>
int main()
{
    int a[9]={34,56,54,32,67,89,90,32,21};
    int b[9];
    int c=1;
    for (int i=0;i<9;i++)
    {
        b[i]=a[9-c];
        printf("%d ",b[i]);
        c++;
    }
    return 0;
}
