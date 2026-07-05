#include<iostream>
//left rotation
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n];
    int d;
    cout<<"Enter no of rotation";
    cin>>d;
    for(int i=0;i<n;i++)
    { 
       b[i] = a[(i + d) % n];
      //b[(i + d) % n] = a[i];in case of right rotation
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i];
    }
}

/*to reduce space complexity though timeccomplexity slightly increases you may do that,reverse is predefined function in algorithm
reverse(arr,arr+d);
reverse(arr+d,arr+n);
reverse(arr,arr+n;)
*/