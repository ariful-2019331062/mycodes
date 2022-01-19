#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
		{
			int a;
			cin>>a;
			if(a==1)
				{
					cout<<"Hard"<<endl;
					return 0;
				}
		}	
		cout<< "Easy"<<endl;
	return 0;
}