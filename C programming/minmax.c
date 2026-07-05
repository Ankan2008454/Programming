#include<stdio.h>
int minmax(int a[],int n,int *min,int *max)
{
    *min=*max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>*max)
        *max=a[i];
        else if(a[i]<*min)
        *min=a[i];
    }
    return 0;

}
int main() 

{
    int a[]={23,4,21,98,987,45,32,10,123,986,50,3,4,5};
    int min,max;
    int l=sizeof(a)/sizeof(a[0]);
    minmax(a,l,&min,&max);
    printf("Minimum element is %d\n",min);
    printf("Maximum element is %d\n",max);
    return 0;
}