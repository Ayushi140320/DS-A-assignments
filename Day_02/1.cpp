/*

https://leetcode.com/problems/richest-customer-wealth/

1672. Richest Customer Wealth

You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

*/

#include<iostream>
#include<vector>
using namespace std;
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_amt=0,sum=0,cust_id=0;
    for(int i=0;i<accounts.size();i++)
    {
        sum=0;
        for(int j=0;j<accounts[i].size();j++)
        {
            sum+=accounts[i][j];
        }
        max_amt=max(sum,max_amt);
    }
return max_amt;
    }
int main()
{
    vector< vector<int> > v;
    int n,m,num;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        vector<int> a;
        for(int j=0;j<m;j++)
        {
            cin>>num;
            a.push_back(num);
        }
        v.push_back(a);
    }
     cout<<maximumWealth(v);
}
