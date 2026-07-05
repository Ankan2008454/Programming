#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6};
    int *p=&a[0];
    p=p+1;
    printf("%d",*p);
}