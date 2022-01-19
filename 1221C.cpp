#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;
		while(n--){
			long long c, m, no;
			cin>>c>>m>>no;
			long long total = c+m+no;
			if(c+m+no>=3 && c>0 && m>0){
				if(min(c, m)>total/3)
					cout<<total/3<<endl;
				else
					cout<<min(c,m)<<endl;

			}
			else
				cout<<0<<endl;
		}
	return 0;
}