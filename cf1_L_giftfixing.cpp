#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{

		long long int n, candi_min = INT_MAX, orange_min = INT_MAX, total=0;
		cin>>n;
		vector<long long int> candi, orange;
			long long int a;
		for(long long int i=0; i<n; i++)
		{
			cin>>a;
			candi.push_back(a);
			candi_min = min( candi_min,a);
			
		}
	 	
		long long int b;
		for(long long int i=0; i<n; i++)
		{
			cin>>b;
			orange.push_back(b);
			orange_min=min(b, orange_min);
			
		}

		for(long long int i=0; i<n; i++)
		{
			long long int m=candi[i]-candi_min;
			long long int n=orange[i]-orange_min;
			total+=max(m,n);
		}
		cout<<total<<endl;
	}	
	return 0;
}