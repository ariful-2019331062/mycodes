#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l, c,d, p, nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int kl = k*l, cd = c*d;
	cout<<min({kl/nl, cd, p/np})/n<<endl;
	return 0;
}