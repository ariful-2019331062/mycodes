#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin>>x;
	while(x--){
		bool flagggg = true;
		string s;
		cin>>s;
		if(s.size()%2==1)
			cout<<"NO"<<endl;
		else{
			for(int i=0; i<s.size()/2; i++)
			{
				if(s[i]!=s[s.size()/2+i])
				{
					flagggg = false;
					break;
				}
			}
			if(flagggg)
				cout<<"YES"<<endl;
			else 
				cout<<"NO\n";
		}
	}	
	return 0;
}