#include<bits/stdc++.h>
using namespace std;
int main()
{
		int numberTotal, numberToBeCheckedAdditionally =0;
		cin>>numberTotal;
		for(int i=0; i<numberTotal; i++){
			string s;
			cin>>s;
			if(s[0]>'9'){
				if(s=="ABSINTH"||s=="BEER"||s=="BRANDY"||s=="CHAMPAGNE"||s=="GIN"||s=="RUM"||s=="SAKE"||s=="TEQUILA"||s=="VODKA"||s=="WHISKEY"||s=="WINE")
					numberToBeCheckedAdditionally++;
			}
			else
				if(stoi(s)<18)
					numberToBeCheckedAdditionally++;
		}
		cout<<numberToBeCheckedAdditionally<<endl;

	return 0;
}