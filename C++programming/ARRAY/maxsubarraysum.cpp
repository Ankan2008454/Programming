//kadane algorithhm(optimal)
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = INT_MIN;
    int sum = 0;

    int start = 0;
    int ansStart = -1;
    int ansEnd = -1;

    for(int i = 0; i < n; i++)
    {
        if(sum == 0)
        {
            start = i;
        }

        sum = sum + arr[i];

        if(sum > maxi)
        {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum < 0)
        {
            sum = 0;
        }
    }

    cout << "Maximum Sum = " << maxi << endl;

    cout << "Subarray: ";

    for(int i = ansStart; i <= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}