#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	vector<long long> vecChashier, vec[t], for_sort;
	for(int i=0; i<t; i++){
		int x;
		cin>>x;
		vecChashier.push_back(x);
	}
	

		for(int i=0; i<vecChashier.size(); i++){
		for(int j=0; j<vecChashier[i]; j++){
			int m;
			cin>>m;
			vec[i].push_back(m);
		}

		// for(auto val: vec[i]){
		// 	cout<<val<<" ";
		// }
		// cout<<endl;














		long long val=accumulate(vec[i].begin(), vec[i].end(), 0)*5 + vec[i].size()*15;
		for_sort.push_back(val);

	}
	cout<<*min_element(for_sort.begin(), for_sort.end())<<endl;
	return 0;
}