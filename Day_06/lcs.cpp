/*

Longest Common Suffix

Write a function to find the longest common suffix string amongst an array of strings.

If there is no common suffix, return an empty string "".

*/

#include<bits/stdc++.h>
using namespace std;
string longestCommonSuffix(vector<string> &strs) 
{
	if(strs.empty()) 
		return " ";
	for(int i=0;i<strs.size();i++) 
		reverse(strs[i].begin(),strs[i].end());
	string ans=strs[0];
	for(int i=1; i<strs.size(); i++) {
		string s=strs[i];
		for(int j=0; j<ans.length(); j++) {
			if(j<s.length() && ans[j]==s[j])
				continue;
			else
				ans=ans.substr(0,j);
		} 
	}
	return ans;
}
int main() 
{
	int n,i;
	string str;
	cin>>n;
	vector<string> strs;
	for(i=0; i<n;i++) {
		cin>>str;
		strs.push_back(str);
	}
	string s=longestCommonSuffix(strs);
    reverse(s.begin(),s.end());
	cout<<s<<endl;
	return 0;
}