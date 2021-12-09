#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> result, result2, result3, result4;
	result.push_back(0);
	result2.push_back(0);
	result3.push_back(0);
	int n, k;
	cin>>n>>k;
	for(int i=0; i<n; i++)
	{
		int sum=0;
		for(int j=0; j<3; j++)
		{
			int f;
			cin>>f;
			sum+=f;

		}
		result.push_back(sum);
		result2.push_back(sum+300);
	}
	sort(result.begin(), result.end(), greater<int>());
	for(int i=1; i<=n; i++){
		
		if(result2[i]>=result[k])

			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;

		
	}
	return 0;
}