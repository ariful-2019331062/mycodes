#include<bits/stdc++.h>
using namespace std;
int main()
{
		int n;
		cin>>n;
		vector<int> vec(n), vec2;
		for(int i=0; i<n; i++){
			cin>>vec[i];
		}
		for(int i=0; i<vec.size(); i++){
			if(vec[i-1]==1 && vec[i+1] ==1 && vec[i]==0)
				vec2.push_back(i);
		}
		int num =0;
		for(auto it=vec2.begin(); it<vec2.end(); it++){
			if(*(it+1)-*it == 2)
			{
				num+=1;
				it++;
			}
			else{
				num++;
			}

		}
		cout<<num<<endl;
	return 0;
}