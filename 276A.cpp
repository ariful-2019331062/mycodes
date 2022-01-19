#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, k;
	cin>>n>>k;
	vector<long long > joys;
	for(long long i=0; i<n; i++){
		long long f, t;
		cin>>f>>t;
		if(t>k)
			joys.push_back(f-t+k);
		else
			joys.push_back(f);
	}
	cout<<*max_element(joys.begin(), joys.end())<<endl;
	return 0;
}