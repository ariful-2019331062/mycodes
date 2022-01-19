#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	for(int k=0, i=1, j=n; i<=j; k++){
		if(k%2==0)
			{
				cout<<i<<" ";
				i++;
			}
		else{
			cout<<j<<" ";
			j--;
		}
	}	
	cout<<endl;
	return 0;
}