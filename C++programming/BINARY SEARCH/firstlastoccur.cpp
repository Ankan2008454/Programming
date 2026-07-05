#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int upperBound(vector<int> &arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int lb = lowerBound(arr, n, k);

    if (lb == n || arr[lb] != k)
        return {-1, -1};

    return {lb, upperBound(arr, n, k) - 1};
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int k;
    cin >> k;

    pair<int, int> ans = firstAndLastPosition(arr, n, k);

    cout << "First Occurrence = " << ans.first << endl;
    cout << "Last Occurrence = " << ans.second << endl;

    return 0;
}
/*int main()
{
    int high=n-1;
    int low=0;
    int f,l;
    f=l=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
        {
            f=mid;
            high=mid-1;
        }
        else if(target>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==target)
        {
            l=mid;
            low=mid+1;
        }
        else if(target>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<"First occurence :"<<f;
    cout<<"last occurence :"<<L;
}*/