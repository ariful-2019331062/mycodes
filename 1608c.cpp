#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		memset(arr, 0, sizeof(arr));
		multimap<int , int > map[2];
		for(int i=0; i<2; i++)
		{
			for(int j=1; j<=n; j++)
			{
				int f;
				cin>>f;
				map[i].insert(f, j);

			}
		}

		for(auto it:)
	}	
	return 0;
}