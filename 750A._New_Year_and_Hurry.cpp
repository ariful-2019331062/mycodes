#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, k, min=0;
	cin>>n>>k;

	for(i=1; i<=n; i++)
	{
		min+=i*5;
		if((240-k)<min)
			break;
	}

	cout<< --i<<endl;

}