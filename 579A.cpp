#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x, count=0;
	
	cin>>x;
	while(x!=0)
	{
		if(x%2!=0)
		{
			x-=1;
			x/=2;
			count++;
		}
		else
			x/=2;
	}
	cout<<count<<endl;
	return 0;
}