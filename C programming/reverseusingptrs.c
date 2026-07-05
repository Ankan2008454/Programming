#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[n];
    int *p;
    printf("Enter Number for array");
    for(p=a;p<=a+n-1;p++)
    {
        scanf("%d",p);
    }
    for(p=a+n-1;p>=a;p--)
    printf("%d",*p);
}