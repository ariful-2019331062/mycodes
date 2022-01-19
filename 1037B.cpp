#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a, b, count=0;
	cin>>a>>b;
	vector<long long> vec(a);
	for(int i=0;i<a; i++)
	{
		cin>>vec[i];
	}
	sort(vec.begin(), vec.end());

	long long median = vec[a/2];
	if(vec[a/2]<b){
		for(int i=a/2; i<a; i++){
			if(vec[i]<b)
				count+=(b-vec[i]);
		}
	}

	else if(vec[a/2]>b)
		for(int i=a/2; i>=0; i--){
			if(vec[i]>b)
				count+=(vec[i]-b);
		}

	
	cout<<count<<endl;
	return 0;
}