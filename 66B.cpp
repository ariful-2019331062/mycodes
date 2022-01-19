#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &vec, int pos)
{
	int left = 0;
	int right =0;
	int rightreference=vec[pos];
	int leftreference=vec[pos];

	for(int i=pos; i<vec.size(); i++)
	{
		if(vec[i]<=rightreference)
		{
			right++;
			rightreference = vec[i];
		}
		else
			break;
	}
	for(int i=pos-1; i>=0; i--)
	{
		if(vec[i]<=leftreference)
		{
			left++;
			leftreference = vec[i];
		}
		else
			break;
	}
	return right+left;

}
int main()
{	
	int n, count=INT_MIN;
	cin>>n;
	
	vector<int > vec(n);
	for(int i=0; i<n; i++)
	{
		cin>>vec[i];
	}
	for(int i=0; i<n; i++)
	{
		count=max(count, solve(vec, i));

	}
	cout<<count<<endl;
	
	return 0;
}