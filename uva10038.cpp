#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	while(~scanf("%d", &a)){
		int b = a;
		int c;
		set<int> st;
		vector<int> vec;
		while(b--){
			scanf("%d", &c);
			vec.push_back(c);
		}
		if(vec.size() ==  1)
			cout<<"Jolly"<<endl;
		else 
		{
			for(int i=0; i<vec.size()-1; i++)
				st.insert(abs(vec[i+1]-vec[i]));
			int mx = *max_element(vec.begin(), vec.end());
			auto set_max = st.end();
			set_max--;


			if(*set_max ==  a-1 && st.size()== a-1)
				cout<<"Jolly"<<endl;
			else
				cout<<"Not jolly"<<endl;
		}
	}	
	return 0;
}