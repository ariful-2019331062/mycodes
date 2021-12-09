#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int j=0; j<n; j++)
	{

		string a;
		cin>>a;

		if(a.size()==2)
			cout<<a<<endl;
		else
		{

			cout<<a[0];
			for(int i=1; i<a.size()-1; i+=2)
				cout<<a[i];	
			cout<<a[a.size()-1]<<endl;
		}
	}
	return 0;
}