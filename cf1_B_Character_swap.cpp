#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		bool flag = true;
		cin>>n;
		string s, t;
		cin>>s>>t;
		vector<char> vec;
		
		for(int i=0 ;i<n; i++)
			if(s[i]!=t[i])
			{
				vec.push_back(s[i]);
				vec.push_back(t[i]);
				
			}
		if((vec.size()/2)%2==1)
			flag = false;
		else
		{
			for(int i=0;i<vec.size()/2; i++)
				if(vec[i]!=vec[i+2])
				{
					flag = false;
					break;
				}

		}
		if(flag)	
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}	
	return 0;
}