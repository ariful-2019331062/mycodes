#include<bits/stdc++.h>
using namespace std;
int main()
{
		
	int n;
	cin>>n;
	while(n--){
		long long int x, sum=0;
		bool flag = false;
		cin>>x;
		vector<int> vec;
		for(int i=0; i<x; i++)
		{
			long long int f;
			cin>>f;
			if(f<=2048)
				vec.push_back(f);
		}

		sort(vec.begin(), vec.end(), greater<int>());
		if(find(vec.begin(), vec.end(), 2048)!=vec.end())
			cout<<"YES"<<endl;
		else{
			for(int i=0; i<vec.size(); i++)
			{
				sum+=vec[i];
				if(sum==2048)
				{
					flag = true;
					break;
				}
			}
			if(flag)
			{
				cout<<"YES"<<endl;
			}
			else 
				{
				cout<<"NO"<<endl;
			}
		}
	}	
	return 0;
}