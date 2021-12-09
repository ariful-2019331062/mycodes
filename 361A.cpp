#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, p;
	cin>>n>>p;
	int arr[n][n];
	if(n==1){
		
		cout<<p<<endl;
		return 0;
	}
	memset(arr, 0, sizeof(arr));
	for(int i=0; i<n; i++)
	{
		for(int j=n-1; j>=0; j--){

			if(j==n-1-i)
				arr[i][j]=p-1;
			else if(j==n-2-i)
				arr[i][j]=1;

		}
	}
	arr[n-1][n-1]=1;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}