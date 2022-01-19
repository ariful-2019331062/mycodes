#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<long long> vec;
		for(int i=0; i<n;i++){
			long long int x;
			cin>>x;
			vec.push_back(x);

		}
		sort(vec.begin(), vec.end());
		cout<<vec[n-1]-vec[0]<<endl;
	}
	return 0;
}