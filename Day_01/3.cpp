/*

https://leetcode.com/problems/shuffle-the-array/

Shuffle the Array

Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].

 
 */

#include<iostream>
#include<vector>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) 
{
    vector<int> v;
    for(int i=0,j=n;j<nums.size();i++,j++)
    {
        v.push_back(nums[i]);
        v.push_back(nums[j]);
    }
    return v;
}

int main()
{
    vector<int> nums;
    int size,val;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>val;
        nums.push_back(val);
    }
    int n;
    cin>>n;
    nums=shuffle(nums,n);
    for(int i=0;i<size;i++)
        cout<<nums[i]<<" ";
}