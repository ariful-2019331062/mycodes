#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long a, b, j, i, num=0;
		string as,bs;
		bool flag = true;
		cin>>as>>bs;
		vector<int>ccc;
		
		if(as.size()==bs.size())
		{
			for(int i=0; i<as.size(); i++)
			{
				if(as[i]>bs[i])
				{
					cout<<-1<<endl;
					flag = false;
					break;
				}
				else{
					int ff=bs[i]-as[i];
					ccc.push_back(ff); 
				}
			}

		}
		else if(as.size()>bs.size()){
			cout<<-1<<endl;
		}
		else
		{
			for(i=as.size()-1, j=bs.size()-1; i>=0; i--, j--){
				if(as[i]>bs[j])
				{
					string xx="";
					if(j-1<0 || j<0){
						cout<<-1<<endl;	
						flag = false;
						break;
					}
					xx += bs[j-1];
					xx+=bs[j];
					int ff= stoi(xx);
					j--;
					int temp = ff-(as[i]-'0');
					
					if(temp>9)
					{
						cout<<-1<<endl;
						flag = false;
						break;
					}
					else{
						ccc.push_back(temp);
					}
					

				}
				else
				{
					char xx;
					
					xx=bs[j];
					int ff= xx-'0';
					
					int temp = ff-(as[i]-'0');
					
					
					ccc.push_back(temp);

				}


			}
			if(flag && bs.size()-as.size()>0)
				for(i=j; j>=0; j--){
					ccc.push_back(bs[j]-'0');
				}
			}
			if(flag)
			{
				int kk= ccc.size()-1;
				for(auto it = ccc.end()-1; it>=ccc.begin(); it--){
			
							
								num+=(*it * ceil(pow(10, kk)));
								kk--;
						}

						cout<<num<<endl;
					}

		}	
		return 0;
	}