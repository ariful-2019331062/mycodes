#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		vector<long long> vec(n), arr(n+1, 0); 
		for(int i=0; i<n; i++){
			long long x;
			cin>>x;
			if(x>n)
			vec.push_back(x);
			if(x<=n){
				
				arr[x]=1;
			}
		}
		sort(vec.begin(), vec.end());
		for(int i=1;i<n;i++){
			if(arr[i]==0){
				long long val=i*2;
				bool flag = false;
				while(val<=vec[n-1] && !flag){
					if(find(vec.begin(), vec.end(), val+1)==vec.end()||find(vec.begin(), vec.end(), val)==vec.end())
						val*=2;
					else
						flag = true;
				}
				if(flag==false){
					cout<<"NO"<<endl;
					break;
				}
			}
		}
	}
	return 0;
}