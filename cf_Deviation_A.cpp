#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i =0; i<n; i++)
{

	int a, b, c;
	cin>>a>>b>>c;
	int deviation=a+c-2*b;
	if(deviation%3==0)
		cout<<0<<endl;
	else
		cout<<1<<endl;

}
return 0;
}
