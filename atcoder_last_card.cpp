#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, a;
	cin>>n>>k>>a;
	int removed=n-a+1;
	if(removed<k)
	{
		k=(k-removed);
		int pos=k%n;
		if(pos==0)
			cout<<n<<endl;
		else
			cout<<pos<<endl;
	}
	else 
	{
		cout<<a+k-1<<endl;
	}
	return 0;
}