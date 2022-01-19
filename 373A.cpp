#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	bool flag = true;
	cin>>k;
	k=k*2;
	int done =1;
	string a;
	vector<char> vec;
	map<char, int> mp;
	for(int i=0; i<4;i++){
		cin>>a;
		for(int j=0; j<4; j++)
		{
			if(a[j]!='.')
				mp[a[j]]++;

		}
	}
	for(auto val: mp){
		if(val.second>k)
		{
			flag = false;
			break;
		}
	}
	if(flag)	
		cout<<"YES\n";
	else
		cout<<"NO"<<endl;
	return 0;
}