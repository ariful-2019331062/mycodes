#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	map<string, string> mp;
	vector<pair<string, string> > st;
	for(int i=0;i<n; i++){
		string a, b;
		cin>>a>>b;
		b+=';';
		st.push_back({b, a});
	}

	for(int i=0; i<m; i++){
		string a,b;
		cin>>a>>b;
		
		cout<<a<< " "<<b<< " #";
		for(auto it=st.begin(); it!=st.end(); it++)
		{
			if(it->first == b)
			{
				cout<<it->second<<endl;
				break;
			}
		}
	}
	return 0;
}