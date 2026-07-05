#include <iostream>
#include <vector>
#include <map>
using namespace std;

int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    map<int, int> mpp;

    mpp[0] = 1;

    int preSum = 0;
    int cnt = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        preSum += arr[i];
        int remove = preSum-k;
        cnt += mpp[remove];
        mpp[preSum]++;
        /*3 4 4
        see if this logic confuses you it is going like this
         that 0 is 1 so when it will reach presum =7 then 7-7=0,
         0 already exist so it will add value of key 0 so c=1; 
         then if it comes 11, 11-7=4 but 4 doesnt exist in the 
         map so it will not be counted*/
    }

    return cnt;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Enter the required sum (k): ";
    cin >> k;

    int ans = findAllSubarraysWithGivenSum(arr, k);

    cout << "Number of subarrays with sum " << k << " = " << ans << endl;

    return 0;
}