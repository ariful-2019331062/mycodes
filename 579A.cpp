#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	int n=1, count =1;;
	cin>>x;
	if(x%2+1>ceil(log2(x)))
	cout<<ceil(log2(x))<<endl;
	else
		cout<<x%2+1<<endl;
	return 0;
}