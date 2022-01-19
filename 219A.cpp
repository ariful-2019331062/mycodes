#include<bits/stdc++.h>
using namespace std;
int main()
{
	bool flag = true;
	int n;
	cin>>n;
	string s;
	cin>>s;
	set<char> vec;
	map<char, int> mp;
	for(int i=0;i<s.size(); i++)
	{
		vec.insert(s[i]);
		mp[s[i]]++;
	}	
	for(auto val: mp)
	{
		if(val.second %n!=0)
		{
			flag = false;
			break;
		}
	}
	if(flag==false)
	{
		cout<<-1<<endl;
	}

	// for(auto val : vec)
	// 	cout<<val<<endl;
	// for(auto val: mp)
	// 	cout<<val.first<<val.second;
	else
	{
		
		for(int i=0; i<n; i++){
			for(auto val: vec)
			{
				for(int i=0; i<mp[val]/n; i++)
				{
					cout<<val;
				}
			}
		}
	}
	return 0;
}