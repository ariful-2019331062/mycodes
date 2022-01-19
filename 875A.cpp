#include<bits/stdc++.h>
using namespace std;
long long int tosum(int x){

	string s= to_string(x);
	for(int i=0;i<s.size();i++)
		x+=(s[i]-'0');
	return x;
}
int main()
{
	long long s, count=0;
	cin>>s;

	string ss = to_string(s);
	
	int num= ss.size()*9;
	
	vector<long long>vec;
	
	for(long long int i=s-num; i<s; i++)
		if(i>0)
		{
			
			if(tosum(i)==s){
				count++;
				vec.push_back(i);
			}
		}
	cout<<vec.size()<<endl;
	for(auto val: vec)
		cout<<val<<endl;

	return 0;
}