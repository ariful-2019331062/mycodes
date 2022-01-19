#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int arr[3]={0};
	map<int, string> mp;
	for(int i=0; i<a; i++)	
	{
		int b;
		cin>>b;
		if(i%3==0)
			arr[0]+=b;
		else if(i%3==1)
			arr[1]+=b;
		else if(i%3==2)
			arr[2]+=b;
	}

	mp.insert({-arr[0], "chest"});
	mp.insert({-arr[2], "back"});
	mp.insert({-arr[1], "biceps"});
	auto it = (mp.begin());
	cout<<it->second<<endl;
	return 0;
}