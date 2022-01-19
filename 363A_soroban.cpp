#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s=to_string(n);
	for(int i=s.size()-1; i>=0; i--){
		if(s[i]=='0')
			cout<<"O-|-OOOO"<<endl;
		else if(s[i]=='1')
			cout<<"O-|O-OOO"<<endl;
		else if(s[i]=='2')
			cout<<"O-|OO-OO"<<endl;
		else if(s[i]=='3')
			cout<<"O-|OOO-O"<<endl;
		else if(s[i]=='4')
			cout<<"O-|OOOO-"<<endl;
		else if(s[i]=='5')
			cout<<"-O|-OOOO"<<endl;
		else if(s[i]=='6')
			cout<<"-O|O-OOO"<<endl;
		else if(s[i]=='7')
			cout<<"-O|OO-OO"<<endl;
		else if(s[i]=='8')
			cout<<"-O|OOO-O"<<endl;
		else if(s[i]=='9')
			cout<<"-O|OOOO-"<<endl;
		
			
	}

	return 0;
}