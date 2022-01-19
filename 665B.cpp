#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, k, count(0);
	cin>>n>>m>>k;
	list<int> vec;
	vector<int> vecc(n*m);
	for(int i=0;i<k; i++){
		int temp;

		cin>>temp;
		vec.push_back(temp);
	}
	for(int i=0; i<n*m; i++){
		cin>>vecc[i];
	}
	for(int i=0; i<vecc.size(); i++){
		int pos = 1;
		for(auto it = vec.begin(); it!=vec.end(); it++)
			{
				
				if(*it==vecc[i]){
					vec.erase(it);
					int temp = *it;
					vec.push_front(temp);
					break;
				}
				pos++;
			}
			
		count+=pos;
	}
	cout<<count<<endl;



	return 0;
}