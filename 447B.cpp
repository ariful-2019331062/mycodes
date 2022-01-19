#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n, val=0;
	cin>>n;
	map<char, int> mpchar;
	multimap<int, char> mpint;
	char a='a';
	for(int i=0; i<26; i++){
		int x; 
		cin>>x;
		mpchar[a]=x;
		mpint.insert({-x, a++});
	}	
	// for(auto val: mpchar)
	// 	cout<<val.first<<" "<<val.second<<" ";
	// cout<<endl;
	// for(auto val: mpint)
	// 	cout<<val.first<<" "<<val.second<<" ";
	// cout<<endl;
	auto it = mpint.begin();
	// cout<<it->first<< " "<<it->second<<endl;
	for(int i=0;i <n; i++){
		s+=it->second;
	}

	// cout<<s<<endl;
	for(int i=1; i<=s.size(); i++){
		char cc= s[i-1];
		val+=(i* mpchar[cc]);
	}
	cout<<val<<endl;
	return 0;
}