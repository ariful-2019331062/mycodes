#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> vec, vec2;
		list<int>lst;
		
		for(int i =0; i<n; i++)
		{
			int k;
			cin>>k;
			vec.push_back(k);
		}
		auto max =max_element (vec.begin(), vec.end());
		int maximum = *max;
		if(max != vec.begin() && max != (vec.end()-1))
			cout<<-1<<endl;
		else
		{
			vec.erase(max);
			//lst.push_front(maximum);
			// for(auto it = vec.end()-1; it>=vec.begin();it--)
			// {
			// 	lst.push_back(*it);
			// }
			
			for(int i =0 ;i<vec.size(); i++)
			{

				auto it = max_element (vec.begin(), vec.end());
				if(it==vec.begin())
				{
					lst.push_front(*it);
					*it = -1;
				}
				
				else
				{
					lst.push_back(*it);
					*it = -1;
				}

			}
			lst.push_back(maximum);
			for(int val: lst)
			{
				cout<<val<<" ";;
			}
			cout<<endl;
		}
	}	
	return 0;
}