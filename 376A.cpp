#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int mid;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='^')
			mid = i;
	}
	long long sum = 0;
	for(int i=0; i<s.size(); i++){
		if(s[i]>='0' && s[i]<='9')
		sum+=((s[i]-'0')*(i-mid));
	}
	if(sum==0)
		cout<<"balance\n";
	else if(sum<0)
		cout<<"left\n";
	else
		cout<<"right"<<endl;

	return 0;
}