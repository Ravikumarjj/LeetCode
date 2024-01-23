#include <bits/stdc++.h> 
using namespace std;
vector<string> subsequences(string str){
	
	// Write your code here
	vector<string> ans;
	int n = str.length();
	for(int i=0;i<(1<<n);i++){
		string temp;
		for(int j=0;j<n;j++){
              if(i&(1<<j)) temp.push_back(str[j]);
		}
		if(!temp.empty())ans.push_back(temp);
	}
	return ans;
	
}