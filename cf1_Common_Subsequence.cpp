#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool flag = false;
		int n, m;
		cin>>n>>m;
		vector<int> vecn(n), vecm(m);
		for(int i=0; i<n; i++)
		{
			cin>>vecn[i];
		}
		for(int i=0; i<m; i++)
		{
			cin>>vecm[i];
		}
		for(int i=0; i<vecn.size(); i++)
		{
			if(find(vecm.begin(), vecm.end(), vecn[i])!=vecm.end())
			{
				cout<<"YES"<<endl;
				cout<<1<<" "<<*find(vecm.begin(), vecm.end(), vecn[i])<<endl;
				flag = true;
				break;
			}
		}
		if(!flag)
			cout<<"NO"<<endl;
	}	
	return 0;
}