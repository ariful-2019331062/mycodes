#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, total=0, p, q;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>p>>q;
		if((q-p)>1)
		{
			total+=1;
		}
	}
	cout<<total<<endl;

}