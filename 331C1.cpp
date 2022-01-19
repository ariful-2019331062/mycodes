#include<bits/stdc++.h>
using namespace std;
int biggeshChar(string s){
	int maxx = 0;
	for(int i=0; i<s.size(); i++){
		maxx = max(maxx, (s[i]-'0'));
	}
	return maxx;
}
int main()
{
	long long time=0, n;
	cin>>n;
	while(n!=0)
	{
		string s = to_string(n);
		n-=biggeshChar(s);
		time++;

	}	
	cout<<time<<endl;
	return 0;
}