#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i, x=0, y=0, count=0, l=0, r=0, u=0, d=0;
	cin>>n;
	string s;
	cin>>s;
	map<char, int> mp;
	for(i=0; i<s.size(); i++)
	{
		
		if(s[i]=='U')
			// ++y;
			++u;
		else if(s[i]=='R')
			// ++x;
			++r;
		else if(s[i]=='L')
			// --x;
			++l;
		else if(s[i]=='D')
			// --y;
			++d;

		// if(x==0 && y==0)
		// 	count=i+1;
	}	
	// if(count)
	// 	cout<<count<<endl;
	// else
	// 	cout<<0<<endl;
	// cout<<l<<" "<<r<<" "<<d<<" "<<u<<endl;
	cout<<min(l,r)*2+min(d, u)*2<<endl;
	return 0;
}