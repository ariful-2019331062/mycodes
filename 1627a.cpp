#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		bool flag = false, flag2= false;
		int a, b, c, d;
		cin>>a>>b>>c>>d;
		vector<char> vec[a];
		for(int j=0;j<a; j++)
		{
			string s;
			cin>>s;
			for(int i=0; i<b; i++){
				vec[j].push_back(s[i]);
				if(s[i]=='B')
					flag = true;
			}

		}

		
		if(flag){
			if(vec[c-1][d-1]=='B')
				cout<<0<<endl;
			else{
				for(int i=0; i<a; i++){
					for(int j=0; j<b; j++){
						if(vec[i][j]=='B' && (i==c-1||j==d-1)){
							cout<<1<<endl;
							flag2 =true;
							break;
						}

					}
						if(flag2)
							break;
				}
				if(!flag2)
					cout<<2<<endl;
			}

		}
		else
			cout<<-1<<endl;
	}	
	return 0;
}