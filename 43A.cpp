#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map<string, int> mp;
	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		mp[s]++;
	}	
	int max =0;
	string maxName;
	for(auto& val: mp){
		if(max<val.second)
		{
			max=val.second;
			maxName = val.first;
		}
	}
	cout<<maxName<<endl;
	return 0;
}