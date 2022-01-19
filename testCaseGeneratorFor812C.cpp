#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n,m,r,c;
	cin >> n >> m >> r >> c;
	vector<vector<char>> arr(n,std::vector<char>(m));
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			cin >> arr[i][j];
		}
	}


	if(arr[r-1][c-1] == 'B')
	{
		cout << "0\n";
		return;
	}

	for(int i = 0 ; i < m ; i++)
	{
		if(arr[r-1][i] == 'B')
		{

			cout << "1\n";
			return;
		}
	}

	for(int i = 0 ; i < n ; i++)
	{
		if(arr[i][c-1] == 'B')
		{

			cout << "1\n";
			return;
		}
	}

	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			if(arr[i][j] == 'B')
			{
				cout << "2\n";
			return;
	
			}
		}
	}
    cout << "-1\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)
		solve();
	return 0;
}