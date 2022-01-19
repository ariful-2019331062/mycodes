#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m, a,b;
	cin>>n>>m>>a>>b;

	if((double)b/(double)m<a)
	{
		if(((n/m)*b+(n%m)*a)>(ceil((double)n/m))*b)
			cout<<ceil((double)n/m)*b<<endl;
		else
			cout<<(n/m)*b+(n%m)*a<<endl;
	}
	else
		cout<<n*a<<endl;

	return 0;
}