#include<bits/stdc++.h>
using namespace std;
int find_first(vector<int> &v, int l){
	for(int i =l-2; i>=0; i--)
	{
		if(v[i]!=-1)
			return i+1;

	}
	return 0;
}
int find_last(vector<int> &v, int r){
	for(int i =r; i<v.size(); i++)
	{
		if(v[i]!=-1)
			return i+1;

	}
	return 0;
}
int main()
{
	int n, b;
	cin>>n>>b;

	while(n!=0 && b!=0){
		vector<int> vec;
		for(int i=0; i<n; i++)
		{
			vec.push_back(i+1);
		}

		while(b--){
			int l, r;
				cin>>l>>r;
				for(int i = l-1; i<r; i++)
				{
					vec[i] = -1;
				}
				// for(int val: vec)
				// 	cout<<val<<" ";
				// cout<<endl;
				int first = find_first(vec, l);
				int last = find_last(vec, l);
				if(first)
					cout<<first<<" ";
				else
					cout<<"* ";
				if(last)
					cout<<last;
				else
					cout<<"*";
				cout<<endl;
			}
		cout<<"-"<<endl;
		cin>>n>>b;

	}	
	return 0;
}