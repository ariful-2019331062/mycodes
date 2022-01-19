#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
		long long m;
		bool flag = true;
		cin>>m;
		if(m<=6)
			cout<<15<<endl;
		else if(m<=8)
			cout<<20<<endl;
		else if(m<=10)
			cout<<25<<endl;
		else
		{
			if(m%2==0)
				cout<<(long long)(m*2.5)<<endl;
			else
				cout<<(long long)((m+1)*2.5)<<endl;
		}

	}	
	return 0;
}