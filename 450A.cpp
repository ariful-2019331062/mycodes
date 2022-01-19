#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
int main()
{
	int n, m;
	
	cin>>n>>m;
	vector<int> vec(n);
	for(int i=0; i<n; i++){
		cin>>vec[i];
		vec[i]= ceil(1.0*vec[i]/m);
	}
	// for(auto val: vec)
	// 	cout<<val<<" ";
	// cout<<endl;
	
	int maxElement = *max_element(vec.begin(), vec.end());
	
	cout<< vec.size()-(find(vec.rbegin(), vec.rend(), maxElement)-vec.rbegin())<<endl;
	
	return 0;
}