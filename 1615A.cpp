#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	while(x--){
		int n;
		cin>>n;
		vector<int> vec;
		for(int i=0; i<n; i++){
			int t;
			cin>>t;
			vec.push_back(t);
		}
		double sum = 0;
		// sort(vec.begin(), vec.end());
		// for(int i=0; i<n;i++){
		// 	if(vec[i]<average){
		// 		vec[i]++;
		// 		vec[n-1]
		// 	}
		// }
		for(auto val: vec)
		{
			sum+=val;
		}
		sum/=(n*1.0);
		if((long long int)sum !=ceil(sum))
			cout<<1<<endl;
		else
			cout<<0<<endl;


	}
	return 0;
}