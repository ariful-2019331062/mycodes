#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <pair<int, int> > vec;
	int n, t;
	cin>>n>>t;

	int arr[n+1]={0};
	arr[1]=1;
	for(int i=1; i<=n-1; i++){
		int k;
		cin>>k;
		vec.push_back({i, k});

	}
	int i =0;
	while(i<vec.size())
	{
		arr[vec[i].first+vec[i].second] = 1;
		i = vec[i].first+vec[i].second -1;
	}
	if(arr[t]==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}