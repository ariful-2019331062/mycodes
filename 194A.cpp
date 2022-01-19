#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, minn=INT_MAX;
	cin>>n>>k;
	for(int i=0; 2*i<=k && i<=n; i++)
	{
		for(int j=0; 3*j<=k && j<=n; j++)
		{
			for(int m=0; 4*m<=k && m<=n; m++)
			{
				for(int l=0; 4*l<=k && l<=n; l++)
				{

					if((2*i + 3*j+ 4*m+5*l)  == k && (i+j+m+l)==n)
					{
						// cout<<i<<" "<<j<<" "<<m<<" "<<l<<" "<<endl;
						minn=min(minn, i);
						// cout<<minn<<endl;
					}
				}
			}
		}
	}
	cout<<minn<<endl;	
	return 0;
}