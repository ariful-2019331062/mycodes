#include<bits/stdc++.h>
using namespace std;
int lucky_count(string s){
	int count =0;
	for(int i=0; i<s.size(); i++)
	{
		if(s[i]=='4' || s[i]=='7')
			count++;
	}
	return count;
}
int main()
{
	int n, k, count =0;
	cin>>n>>k;
	for(int i =0; i<n; i++){
		int a;
		cin>>a;
		string s = to_string(a);
		if(lucky_count(s)<=k)
			count++;
	}
	cout<<count<<endl;
	return 0;
}