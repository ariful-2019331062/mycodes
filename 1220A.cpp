	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		map<char, int> mp;
		for(int i=0; i<n; i++){
			mp[s[i]]++;
		}	
		for(int i=0; i<mp['n']; i++)
			cout<<1<<" ";
		for(int i=0; i<mp['z']; i++)
			cout<<0<<" ";
		cout<<endl;

		return 0;
	}