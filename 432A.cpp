#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> vec;
	int n, k, count=0;
	cin>>n>>k;
	for(int i=0; i<n; i++) {
		int y;
		cin>>y;
		vec.push_back(y);
	}
	sort(vec.begin(), vec.end());
	for(int i =1; i <= n/3; i++)
	{
		if(vec[i*3-1]+k <= 5)
			count++;
	}
	cout<<count<<endl;
	return 0;
}