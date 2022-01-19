#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	while(x--)
	{
		long long  n;
		cin>>n;
		set<long long> stt;
		for(long long i=1; i<=sqrt(n); i++)
		{
			
			if(i*i<=n)
				stt.insert(i*i);
			if(i*i*i <=n)
				stt.insert(i*i*i);

			
		}
		cout<<stt.size()<<endl;
	}	
	return 0;
}