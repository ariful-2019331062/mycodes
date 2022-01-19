#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int a, b, c;
		cin>>a>>b>>c;
		long long totalHealth = a+b+c;
		if(totalHealth%9!=0)
			cout<<"NO"<<endl;
		else
		{
			int totalRound = totalHealth/9;
			if(a<totalRound ||b<totalRound||c<totalRound)
				cout<<"NO\n";
			else
				cout<<"YES\n";
		}
	}	
	return 0;
}