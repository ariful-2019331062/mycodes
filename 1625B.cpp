#include<bits/stdc++.h>
using namespace std;
bool isright(int a, int b, int c){
	if(a-b == b-c)
		return true;
	else
		return false;

}
int main()
{
	int t;

	cin>>t;
	while(t--){
		long long int a, b, c;
		cin>>a>>b>>c;
		
			if((b+(b-a))>=1 && (b+(b-a))%c==0)
				cout<<"YES"<<endl;
			else if((b-(c-b))>=1 &&(b-(c-b))%a==0)
				cout<<"YES"<<endl;
			else if(((a+c))%2==0 && ((a+c)/2) >=1 && ((a+c)/2)%b==0)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;

		}
	

	return 0;
}