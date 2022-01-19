#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<42 && n>9)
		cout<<"AGC0"<<n<<endl;
	else if(n<10)
		cout<<"AGC00"<<n<<endl;
	else
		cout<<"AGC0"<<n+1<<endl;
	return 0;
}