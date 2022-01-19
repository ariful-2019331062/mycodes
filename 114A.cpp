#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
	long long k, l;
	cin>>k>>l;
	for(int i=0; ceil(pow(k, i))<=LLONG_MAX; i++){
		if(ceil(pow(k, i))==l)
		{
			cout<<"YES"<<endl;
			cout<<i-1<<endl;
			break;
		}
		else if(ceil(pow(k, i))>l)
		{
			cout<<"NO"<<endl;
			break;
		}

	}
	return 0;
}