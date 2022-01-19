#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, sum=0;
	cin>>n>>k;
	vector<int> vec(n);
	for(int i=0; i<n; i++){
		cin>>vec[i];
	}	
	for(int i=0; i<vec.size()-1; i++)
	{
		if(vec[i]+vec[i+1]<k)
		{
			sum+=(k-vec[i]-vec[i+1]);
			vec[i+1]=vec[i+1]+(k-vec[i]-vec[i+1]);
		}
	}
	cout<<sum<<endl;
	for(auto val: vec){
		cout<<val<< " ";
	}
	cout<<endl;
	return 0;
}