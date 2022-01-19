#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int a, suma=0, sumb=0, amax=0, bmax=0 ;
		cin>>a;
		vector<int> veca, vecb, vecc, vecd;
		for(int i=0; i<a; i++){
			int x;
			cin>>x;
			veca.push_back(x);

		}
		int b;
		cin>>b;
		
		for(int i=0; i<b; i++){
			int x;
			cin>>x;
			vecb.push_back(x);

		}
		for(int i=0; i<a; i++){
			suma+=veca[i];
			amax=max(amax, suma);

		}
		
		for(int i=0; i<b; i++){
			sumb+=vecb[i];
			bmax=max(bmax, sumb);

		}
		
		cout<<amax+bmax<<endl;

	}	
	return 0;

}