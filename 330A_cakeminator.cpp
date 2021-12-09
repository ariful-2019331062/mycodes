#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r, c, row=0, col;
	cin>>r>>c;
	col=c;
	vector<char> vec[r], vec1[c];
	for(int i=0 ;i<r; i++)
	{
		string a;
		cin>>a;
		for(int j=0; j<a.size(); j++)
			vec[i].push_back(a[j]);
	}
	
	for(int i=0; i<r; i++)
		{
			if(find(vec[i].begin(), vec[i].end(), 'S')==vec[i].end())
				row++;
		}
for(int i=0; i<c; i++)
	for(int j=0; j<r; j++)
	{
		if(vec[j][i]=='S')
		{
			--col;
			break;
		}
	}
	cout<<row*c+col*(r-row)<<endl;
	
}