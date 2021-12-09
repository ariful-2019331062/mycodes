#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long int abc, bcd, c=0;
		cin>>abc>>bcd;
		c=abc+bcd;

		long long int small, big;
		small = abc<bcd?abc:bcd;
		big = abc>bcd? abc:bcd;
		long long int total_team = c/4;
		if(abc==bcd)
			cout<<total_team<<endl;
		else if(c<4)
			cout<<0<<endl;
		else{
			if(total_team>small)
			cout<<small<<endl;
			else
			cout<<total_team<<endl;
		}
	}	
	return 0;
}