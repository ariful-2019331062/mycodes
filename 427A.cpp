#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=0, b=0, n, m;
	cin>>n;
	for(int i =0; i<n; i++)
	{
		cin>>m;
		if(m<0)
		{
			++a;
			if(b>0)
			{
				--a;
				--b;
			}
				
		}
		else
		{
			b+=m;
		}
	}
	cout<<a<<endl;
	return 0;
}