#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin>>n>>k;
	string s;
	cin>>s;
	int right = k/2, r=0, l=0, left = k/2;
	
	vector<char> vec;
	for(int i=0; i<n ;i++){
		if(s[i]=='('){
			if(l<left)
			{
				vec.push_back(s[i]);
				l++;
			}
		}
		else{
			if(r<right){

				vec.push_back(s[i]);
				r++;
			}
			
		}
	}
		// while(!st.empty()){
		// 	vec.push_back(st.top());
		// 	st.pop();
		// }
	for(char bracket: vec){
		cout<<bracket;
	}
	cout<<endl;
	return 0;
}