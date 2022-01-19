#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		vector<int> vec[n];
		bool flag = false;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<4; j++)
			{
				int f;
				cin>>f;
				vec[i].push_back(f);
			}

		}
		if(m%2==1)
			cout<<"NO"<<endl;
		else
		{

			for(int i=0; i<n; i++)
			{
				if(vec[i][1]==vec[i][2])
				{
					flag = true;
					break;
				}
			}


			if(flag)
				cout<<"YES"<<endl;
			else 
				cout<<"NO"<<endl;
		}
	}	
	return 0;
}