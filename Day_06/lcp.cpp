/*

https://leetcode.com/problems/longest-common-prefix/

14. Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

*/

#include<bits/stdc++.h>
using namespace std;
 string longestCommonPrefix(vector<string>& strs) {
	if(strs.empty()) 
        return " ";
	string ans=strs[0];
	for(int i=1; i<strs.size(); i++) 
    {
		string s=strs[i];
		for(int j=0; j<ans.length(); j++) 
        {
			if(j<s.length() && ans[j]==s[j])
				continue;
			else
				ans=ans.substr(0,j);
		}
    }
	return ans;
}

int main() {
	int n,i;
	string str;
	cin>>n;
	vector<string> strs;
	for(i=0; i<n; i++) {
		cin>>str;
		strs.push_back(str);
	}
	string s=longestCommonPrefix(strs);
 	cout<<s<<endl;
	return 0;
}