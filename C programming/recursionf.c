#include<stdio.h>
void fib(int n,int a,int b)
{  
    
    int c;
    if(n!=0)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",a);
        fib(n-1,a,b);
    }
}    
int main()
{
    int n;
    printf("Enter number");
    scanf("%d",&n);
    fib(n,0,1);
    return 0;
}