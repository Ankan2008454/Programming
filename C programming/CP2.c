//rotate array by K position initial 1234 final 2341 if k=1;
#include <stdio.h>
int main()
{
    printf("Enter no of elements of the array");
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter %d element:",(i+1));
        scanf("%d",&a[i]);
    }
    printf("Enter value of k");
    int k;
    scanf("%d",&k);
    int b[n];
    for(int j=0;j<n;j++)
    {   
        if((j+k)>(n-1))
       b[(j+k)-n]=a[j];
    else
        b[j+k]=a[j];
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}