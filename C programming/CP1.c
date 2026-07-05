//Finding second largest element in an array 
#include<stdio.h>
int b[100];
int main()
{
    printf("Enter length of the array:");
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d array", (i+1));
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    
    int c=0;
     for(i=0;i<n;i++)
    {
        if(a[i]<max)
        {
        b[c]=a[i];
        c++;
        }
    
    }
    max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
        max=b[i];
    }
    printf("Second largest element is %d",max);
}
