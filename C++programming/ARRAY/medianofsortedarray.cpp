//leetcode 1
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        for(int i=0;i<(nums1).size();i++)
        v.push_back(nums1[i]);
        for(int i=0;i<(nums2).size();i++)
        v.push_back(nums2[i]);
        sort(v.begin(),v.end());
        int n=v.size();
        double median=0.0;
        if(n%2!=0)
        median=v[(n-1)/2.0];
        else
        median=(v[n/2]+v[n/2-1])/2.0;
        for(int i=0;i<n;i++)
        cout<<v[i];
    return median;
    }
};