#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;	
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		set<int> st;
		for(int i=0; i<n; i++)
		{
			int f;
			cin>>f;
			st.insert(f);
		}
		vector<int> vec;
		for(auto &val : st)
		{
			vec.push_back(val);
		}
		bool flag = false;
		for(int i=vec.size()-1; i>=0; i--)
		{
			if((i+1)+x>=vec[i])
			{
				cout<<(i+1)+x<< endl;
				flag = true;
				break;
			}
		}
		if(!flag)
			cout<<x<<endl;

	}
	return 0;
}