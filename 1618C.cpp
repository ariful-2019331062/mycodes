#include<bits/stdc++.h>
using namespace std;
long long gcd(long long int a,long long int b) {
	long long int temp;
	while(b > 0) {
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{

		int t; 
		cin>>t;
		vector<long long int> vec(t);
		for(int i=0; i<t; i++)
		{
			cin>>vec[i];
		}
		bool flag = true;
		long long r=vec[0];
		for(int i=2; i<vec.size(); i+=2)
		{
			r = gcd(r, vec[i]);
		}
		long long k=vec[1];
		for(int i=3; i<vec.size(); i+=2)
		{
			k = gcd(k, vec[i]);
		}
		if(r==k)
			cout<<0<<endl;
		else if(r>k){
			
			for(int i=0; i<vec.size(); i++)
			{
				if(vec[i]%r==0 && vec[i]%k==0 && k!=1)
				{
					flag = false;
					cout<<0<<endl;
					break;
				}
			}

		}
		else if(r<k){
			
			for(int i=0; i<vec.size(); i++)
			{
				if(vec[i]%k==0 && vec[i]%r==0 && r!=1)
				{
					flag = false;
					cout<<0<<endl;
					break;
				}
			}

		}
		if(flag)
			if(r>k)
				cout<<r<<endl;
			else
				cout<<k<<endl;
	}	
	return 0;
}