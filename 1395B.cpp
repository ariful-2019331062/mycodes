#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, x, y;
	cin>>n>>m>>x>>y;	
	bool row=true, col=true;
	vector<pair<int,int>> vec;
	vec.push_back({x, y});
	for(int i=y-1; i>0 ; i--)
		vec.push_back({x, i});
	for(int i=y+1; i<=m; i++)
		vec.push_back({x, i});
	int count=m;
	int i, j=m;
	for( i=x+1; row; )
	{
		if(j==m)
			for(j; col; )
			{
				vec.push_back({i, j});
				j--;
				count++;
				if(j==0){
					j=1;
					break;
				}
			}
			else if(j==1)
				for(j; col; )
				{
					vec.push_back({i, j});
					j++;
					count++;
					if(j>m){
						j=m;
						break;
					}
				}


		// if(i>0)
		// 	i--;
		// else if(i==0)
		// {
		// 	i=x;
		// }

				if(i>=x && i<=n)
				{
					i++;
					if(i>n)
						i=x;
				}

				if(i<=x)
				{
					i--;
					if(x==0)
					{
						row=false;
						break;
					}
				}
				if(count==n*m)
					break;
			}
			for(auto val: vec)
				cout<<val.first<<" "<<val.second<<endl;

			return 0;
		}