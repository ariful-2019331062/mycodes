#include<bits/stdc++.h>
using namespace std;
int main()
{
	string st;
	getline(cin, st);
	vector<char> vec;
	for(int i =0; i<st.size(); i++)
		if(st[i]==' ')
			;
		else
			vec.push_back(st[i]);
		char a = vec[vec.size()-2];
		
		a = toupper(a);
		switch(a){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
			case 'Y':
			cout<<"YES"<<endl;
			break;

			default:
			cout<<"NO"<<endl;
		}
		return 0;
	}