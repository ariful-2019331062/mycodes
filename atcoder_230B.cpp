#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s, l="oxxoxxoxxoxxoxxoxxoxxoxxoxx";
	cin>>s;
	
		if (l.find(s) != std::string::npos) 
    		cout << "Yes" << '\n';
    	else
    		cout<<"No"<<endl;

	
	return 0;
}