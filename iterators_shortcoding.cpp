#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> v{1,2,3,4,5};
	for(int val : v)
	{
		cout<<val<<" ";	
		val++;
		// its just the copy, so original ones will not be changed
	}
	cout<<endl;
	for(int &val : v)
	{
		val++;
		cout<<val<<" ";	
		// its just the copy, so original ones will not be changed
	}
	cout<<endl;
	vector< pair<int,int> > vv{{1,2},{2,3},{4,2}};
	for(auto a: vv)
	{
		cout<<a.first<<" "<<a.second<<endl;
	}
	for(auto &a: vv)
	{
		cout<<a.first<<" "<<a.second<<endl;
	}
	return 0;
}
