#include<stdio.h>
int main()
{
    int a=5;
    int b=6;
    (a>b)?(b=a):(a=b);
    printf("a=%d b=%d",&a,&b);
}