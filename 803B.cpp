#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<long long> vec(n), vec2;
	for(int i=0; i<n; i++){
		cin>>vec[i];
		if(vec[i]==0)
			vec2.push_back(i);
	}	
	// for(auto val: vec2){
	// 	cout<<val<<" ";
	// }
	// cout<<endl;
	auto it = vec2.begin();
	int jb=-1, jf=*it;
	for(int i=0; i<n; i++){
		if(i>jf && it!=vec2.end()-1){
			jb=jf;
			jf=*(++it);
			cout<<min(abs(i-jf), abs(i-jb))<<endl;
		}
		else if(jb==-1)
		{
			cout<<abs(jf-i)<<endl;
		}
		else
		{
			cout<<min(abs(i-jf), abs(i-jb))<<endl;
		}


	}


	return 0;
}