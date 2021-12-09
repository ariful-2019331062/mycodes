#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l, r, a;
	cin>>l>>r>>a;
	if(l==r)	
		cout<<l*2 + (a/2)*2;
	else
	{
		int dif = abs(l-r);
		int minn = min(l, r);
		if(dif>=a)
		{
			minn = (minn+a)*2;
			cout<<minn<<endl;
		}
		else
		{
			minn +=dif;
			a-=dif;
			cout<<minn*2 + (a/2)*2;
		}
	}	
	cout<<endl;
	return 0;
}