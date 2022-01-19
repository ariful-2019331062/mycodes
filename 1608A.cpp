#include<bits/stdc++.h>
using namespace std;
int main()
{
	int f;
	cin>>f;
	for(int l=0; l<f; l++)
	{
		long long int k;
		cin>>k;
		for(int j=1; j<=k; j++)
		{
			cout<<3*j+1<<" ";
		}
		cout<<endl;
	}	
	return 0;
}