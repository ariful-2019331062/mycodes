#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t;
		cin>>t;
		while(t--){
			int n, a, b;
			cin>>n>>a>>b;
			vector<int> vec;
			for(int i=1; i<=n; i++){
				vec.push_back(i);
			}
			if(a>(ceil(n/2.0)-1) || b >(ceil(n/2.0)-1) )
				cout<< -1<< endl;
			else if(abs(a-b)!=1){
				cout<<-1<<endl;
			}
			else if(a>b)
			{
				cout<<-1<<endl;
			}
			else
			{
				if(n%2!=0)
				{
					for(int j=0; j<b; j++)
					{
						
					}
				}
			}
		}

	return 0;
}