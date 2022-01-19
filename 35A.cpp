#include<bits/stdc++.h>
using namespace std;
int main()
{
	 freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
		int a;
		cin>>a;
		for(int i=0; i<3; i++){
		
			int x, y;
			cin>>x>>y;
			if(x==a)
				a=y;
			else if(y==a)
				a=x;


		}
		cout<<a<<endl;

	return 0;
}