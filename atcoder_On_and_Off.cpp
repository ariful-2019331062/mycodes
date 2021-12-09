#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s, t, k;
	cin>>s>>t>>k;
	// k+=s;
	// k%=24;
	// k+=0.5;
	// if(k>=s || k<=t)
	// 	cout<<"Yes"<<endl;
	// else
	// 	cout<<"No"<<endl;	
	if(s<t){
		if(k>=s && k<t)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	else{
		if(k>=s && k>t)
			cout<<"Yes"<<endl;
		else if(k<=s && k<t)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}