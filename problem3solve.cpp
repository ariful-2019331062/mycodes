#include<bits/stdc++.h>
using namespace std;
int mx = INT32_MIN;
int main()
{
	int n;
	cin>>n;
	bool flag = true;
	// map<pair<int,int> , int> mp;
	// for(int i =0 ;i<n; i++)	{
	// 	int a,b,c,d;
	// 	cin>>a>>b>>c>>d;
	// 	pair<int, int> middlepoint;
	// 	middlepoint.first = (a+c)/2;
	// 	middlepoint.second = (b+d)/2;
	// 	mp[middlepoint]++;
	// }
	// for(auto it=mp.begin(); it!=mp.end(); it++)
	// {
	// 	mx = max(mx, it->second);
	// 	cout<<it->first.first<<" "<<it->first.second<<"   "<<it->second<<endl;
	// }
	// cout<<mx<<endl;
	// return 0;
	if(n>=10 && n<=1400)
		for(int i =0; i<n*4; i++){
			int a;
			cin>>a;
			if(a<-100 || a>100)
			{
				flag= false;
				break;
			}
		}
	else
		flag=false;
	if(flag)
		return 0;
	else
	{
		cout<<"invalid input"<<endl;
		return 1;
	}

}