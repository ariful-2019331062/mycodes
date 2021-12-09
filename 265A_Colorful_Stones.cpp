#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a, b;
	cin>>a>>b;
	int pos =1;
	for(int i =0,j=0; i<b.size(); i++)
	{
		if(a[j]==b[i]){
			j++;
			pos++;
		}
	}	
	cout<<pos<<endl;
	return 0;
}