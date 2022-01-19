#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int h, v, n, m;
		cin>>h>>v;
		if(h>v)
		{
			if(h-v==1)
			{
				n=h;
				while(n--)
					s+="01";
				s+="0";
				cout<<s.size()<<"\n"<<s<<endl;
			}
			else
			{
				n=v+1;
				while(n--)
					s+="01";
				n=h-v-1;
				while(n--)
					s+="001";
				s+="0";
				cout<<s.size()<<"\n"<<s<<endl;
			}
		}
		else if(h<v)
		{
			if(v-h==1)
			{
				n=v;
				while(n--)
					s+="10";
				s+="1";
				cout<<s.size()<<"\n"<<s<<endl;
			}
			else
			{
				n=h+1;
				while(n--)
					s+="10";
				n=v-h-1;
				while(n--)
					s+="110";
				s+="1";
				cout<<s.size()<<"\n"<<s<<endl;
			}
		}
		else
		{
			n=h+1;
			while(n--)
				s+="01";
			cout<<s.size()<<"\n"<<s<<endl;
		}

	}	
	return 0;
}