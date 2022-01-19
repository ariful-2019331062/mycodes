#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,  m, maximum=0, minn=0;
	cin>>n>>m;
	vector<int> vec, vec2;
	
	for(int i=0; i<m; i++)
	{
		int x; cin>>x; 
		vec.push_back(x);
		vec2.push_back(x);
		
	}	
	

	

	int k=n;
	
	while(k--)
	{
		
		auto it= max_element(vec.begin(), vec.end());
		maximum += *it;
		--(*it);
	}
	cout<<maximum<< " ";
	k=n;
	
	// for(auto val : vec2)
	// {
	// 	cout<<val<<" ";
	// }
	// cout<<endl;
	while(k--)
	{
		
		auto it= min_element(vec2.begin(), vec2.end());
		
		minn += *it;
		--(*it);
		if(*it==0)
			vec2.erase(it);
	}
	cout<<minn<<endl;

	return 0;
}