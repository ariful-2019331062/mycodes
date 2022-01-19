#include<bits/stdc++.h>
using namespace std;
bool found(char a, string b){
	for(int i=0; i<b.size(); i++){
		// cout<<b[i]<<" "<<a<<endl;
		if(b[i]==a){
			// cout<<"true  \n";
			return true;
		}
	}
	return false;
}
int main()
{
		int n;
		cin>>n;
		while(n--)
		{
			bool flag = false;
			string a, b;
			cin>>a>>b;
			for(int i=0; i<a.size(); i++)
			{
				if(found(a[i], b))
				{
					flag = true;
					break;
				}
			}
			if(flag)
				cout<<"YES"<<endl;
			else 
				cout<<"NO"<<endl;
		}
	return 0;
}