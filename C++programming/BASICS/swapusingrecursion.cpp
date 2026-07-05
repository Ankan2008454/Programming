#include<iostream>
void swap(int b[],int l,int r)
{

    if(r>l)
    {
        int c;
        c=b[l];
        b[l]=b[r];
        b[r]=c;
        swap(b,l+1,r-1);
    }
}
int main()
{
    std::cout<<("Enter no of elements:");
    int n;
    std::cin>>(n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        std::cout<<("Enter ")<<(i+1)<<"element";
        std::cin>>a[i];
    }
    int l,r;
    l=0;
    r=n-1;
    swap(a,l,r);
     for(int i=0;i<n;i++)
    {
        std::cout<<a[i];
    }
}