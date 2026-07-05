#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]-'a']++;
    }
    char q;
    cin>>q;
    cout<<hash[q-'a'];
}