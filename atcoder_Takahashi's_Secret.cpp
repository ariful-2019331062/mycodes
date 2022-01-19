#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> vec;
	int N, X, count=0;
	cin>>N>>X;
	int arr[N+1]={0};
	vec.push_back(0);
	for(int i=0; i<N; i++)
	{
		int k;
		cin>>k;
		vec.push_back(k);
	} 
	int pos=X;	
	arr[pos]=1;
	// for(int i =0; i<=N; i++)
	// 	cout<<arr[i]<<endl;
	count++;
	while(true){
		int val = vec[pos];
		if(arr[val]==0){
			count++;
			arr[val]=1;
			pos=val;
			
		}
		else{
			break;
		}
	}
	cout<<count<<endl;
	return 0;
}