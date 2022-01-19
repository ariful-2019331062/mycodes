#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, neg=0, pos=0;
	cin>>n;
	int half = ceil(n/2.0);
	vector<int> vec(n);
	for(int i =0; i<n; i++)
	{
		cin>>vec[i];
		if(vec[i]<0)
			neg++;
		else if(vec[i]>0)
			pos++;
	}	
	if(neg>=half)
		cout<<-2<<endl;
	else if(pos>=half)
		cout<<2<<endl;
	else
		cout<<0<<endl;
	return 0;
}