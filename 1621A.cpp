#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
		bool flag = true;
		int n, k, count=0;
		cin>>n>>k;
		if(ceil((double)n/2)>=k)
		{
			for(int i=1; i<=n; i++){
				for(int j=1; j<=n; j++){
					if(i%2==1 && j%2==1 && i==j && flag){
						cout<<'R';
						count++;
					}
					else
						cout<<'.';
				} 
					cout<<endl;

				if(count==k)
					flag=false;
			}

			cout<<endl;
		}
		else
			cout<<-1<<endl;
	}	
	return 0;
}