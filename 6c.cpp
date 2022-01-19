#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, bob=0,bobtime=0 ,alice=0, aliceTime =0;
	cin>>t;
	
	vector<int> vec(t);
	for(int i=0; i<t; i++){
		cin>>vec[i];
		

	}
	if(t>1){
		aliceTime+=vec[0];
		alice++;
		bob++;
		bobtime+=vec[t-1];
		
		for(int i=0, j=t-1; i<j;){
			if(i+1==j || i+1==j-1 || i+1>j-1){
				if(i+1==j-1)
				{
					if(bobtime==aliceTime)
					{
						alice++;
						break;
					}
					else if(aliceTime>bobtime)
					{
						bob++;
						break;
					}
					else
					{
						alice++;
						break;
					}
				}
				else if(i+1 == j || i+1>j-1)
					break;
			}
			else{
				if(aliceTime>bobtime){
					bob++;
					j--;
					bobtime+=vec[j];

				}
				else
				{
					alice++;
					i++;
					aliceTime+=vec[i];
				}
			}
		}
	}
	
	if(t==1)
		cout<<1<<" "<<0<<endl;
	else

		cout<<alice<<" "<<bob<<endl;
	return 0;
}

