#include<stdio.h>
int main()
{
    int j;
    int n=5;
    int max=-99999;
    int smax=-99999;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&j);
        if(max<j)
        {
            smax=max;
            max=j;
        }
        else if(smax<j)
        {
            smax=j;
        }
    }
    printf("%d %d",max,smax);
}