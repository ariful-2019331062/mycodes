#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, count=0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		bool result = false;
		int s;
		cin>>s;
		for(int a=1; a<s/4; a++)
		{
			for(int b =1; b<s/4; b++)
			{
				if((3*(a+b)+4*a*b)==s){
					result=true;
					break;
				}

			}
			if(result==true)
				break;
		}
		if(result==true)
			count++;

	}	
	cout<<n-count<<endl;
	return 0;
}