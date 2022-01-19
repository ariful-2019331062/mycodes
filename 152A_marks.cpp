#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, count=0;
	cin>>n>>m;
	vector <string> vec[n];
	

	for(int i=0; i<n; i++){
		string s;
		cin>>s;
		vec[i].push_back(s);
	}
	map<int,int> mp[m];
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			
			int f = vec[j][0][i]-48;
			
			mp[i][f]++;
		}
		
	}
	// for(int i=0; i<m; i++){
	// 	for(auto it: mp[i])
	// 		cout<<it.first<<  " "<<it.second<<endl;
	// 	cout<<endl;
	// }



	for(int i=0; i<m; i++)
	{
		auto it= mp[i].end();
		it--;
		
		if(it->second == 1)
			count++;
	}
	cout<<count<<endl;
	return 0;
}