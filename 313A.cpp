#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<string> vec(1);
	vec[0]="";

	if(s[0]!='-')	
		cout<<s<<endl;
	else{
		if((s[s.size()-1]-'0') > (s[s.size()-2]-'0'))
		{

			for(int i=0;i<s.size()-1;i++)
			{
				vec[0]+=s[i];

			}
		}
		else{

			for(int i=0;i<s.size()-2;i++)
			{
				vec[0]+=s[i];

			}
			vec[0]+=s[s.size()-1];
		}
		if(vec[0].size()==2 && vec[0][1]=='0')
			cout<<0<<endl;
		else
			cout<<vec[0]<<endl;
	}
	return 0;
}