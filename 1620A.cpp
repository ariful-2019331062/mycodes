#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s[0]==s[s.size()-1])
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}	
	return 0;
}