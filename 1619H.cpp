#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &vec,int b, int c){
	if(c==1)
		return vec[b-1];
	else
		return solve(vec, vec[b-1], c-1);
}
int main()
{
	int n, q;
	cin>>n>>q;
	vector<int> vec(n);
	for(int i=0;i<n ;i++)
	cin>>vec[i];
	while(q--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a==1)
		{
			int temp = vec[b-1];
			vec[b-1]=vec[c-1];
			vec[c-1]=temp;

		}
		else if(a==2)
		{
			cout<<solve(vec, b, c)<<endl;
		}
	}	
	return 0;
}