#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, b;
	cin>>n;
	b=n;
	vector<int> ms;
	multimap<int, pair<int,int> > mp;
	int diff=INT_MAX;
	while(b--)
	{
		int a;
		cin>>a;
		ms.push_back(a);
	}
	
	ms.push_back(ms[0]);
	for(int i =0; i<ms.size()-1; i++){
		mp.insert({abs(ms[i+1]-ms[i]), {(i)%n+1, (i+1)%n+1}});
		// cout<<abs(ms[i+1]-ms[i])<<" "<<(i%n) +1<<" "<< (i+1)%n+1<<endl;
	}
	// for(int i=0; i<ms.size()-1; i++){
	// 	for(int j =i+1; j<ms.size(); j++)
	// 	{
	// 		diff = abs(ms[j]-ms[i]);
			
	// 		mp.insert({diff, {j+1, i+1}});
	// 	}
	// }
	auto it = mp.begin();
	cout<<it->second.first<<" "<<it->second.second<<endl;
	return 0;


}