#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	while(n--)
	{
		long long int sum(0);
		long long int m;
		cin>>m;
		long long int f;
		for(long long int i=0; i<m; i++)
		{
			cin>>f;
			
			sum+=f;
		}
		
		cout<<(long long)(ceil((double)sum/m))<<endl;
	}	
	return 0;
}