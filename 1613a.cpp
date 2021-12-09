#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long int x1, p1, x2, p2;
		cin>>x1>>p1>>x2>>p2;
		
		long long int l=x1*ceil(pow(10, p1));
		long long int r=x2*ceil(pow(10, p2));
	
		
		if(l>r)
			cout<<">"<<endl;
		else if(l<r)
			cout<<"<"<<endl;
		else
			cout<<"="<<endl;
	}
		return 0;
}