#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		multiset<long long> ms;
		long long sum =0, count=0;
		long long int n, r, l, k;
		cin>>n>>l>>r>>k;
		for(int i=0; i<n; i++){
			long long a;
			cin>>a;
			if(a>=l && a<= r)
				ms.insert(a);
		}
		for(auto &val: ms)
		{
			sum+=val;
			if(sum<=k)
				count++;
		}
		cout<<count<<endl;
	}	
	return 0;
}