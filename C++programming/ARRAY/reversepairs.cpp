#include<iostream>
#include<vector>
using namespace std;
int cnt=0;
void merge(vector<int> &arr,int low,int mid,int high)
{
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {arr[i]=temp[i-low];}
}
void countpairs(vector<int>&arr,int low,int mid,int high)
{
    int right =mid+1;
    for(int i=low;i<=mid;i++)
    {
        while(right<=high && arr[i]>2*arr[right])
        right++;
        cnt+=right-(mid+1);
    }
}
void ms(vector<int> &arr,int low,int high)
{
    if(low==high)
    return;
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    countpairs(arr,low,mid,high);
    merge(arr,low,mid,high);
}
void mergeSort(vector<int>&arr,int n)
{
    ms(arr,0,n-1);
}
int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, n);
}