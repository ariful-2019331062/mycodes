#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int > vec;
	map<int, int> mp;
	for(int i=0; i<n; i++)
	{
		int x; cin>>x;
		vec.push_back(x);
		mp[x]++;
	}
	auto it= min_element(vec.begin(), vec.end());
	if(mp[*it]>1)
		cout<<"Still Rozdil\n";
	else
		cout<<it-vec.begin()+1<<endl;	
	return 0;
}