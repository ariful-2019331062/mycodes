#include<bits/stdc++.h>
using namespace std;
bool solve(vector<long long> &vec, long long int end, long long int compare)
{
	// cout<<end<<" ";
	long long int sum =0;
	double average = accumulate(vec.begin(), vec.begin()+(end+1) , sum);
	// cout<<average<<" ";
	average/=(double)(end+1);
	// cout<<average<<endl;
	if(average>=compare)
		return true;
	return false;

}
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long a, b, count=0, sum=0;
		cin>>a>>b;
		vector<long long int> vec(a);
		for(int i=0; i<a; i++){
			cin>>vec[i];
			
		}
		
		sort(vec.begin(), vec.end(), greater<long long int> ());
		// if(vec[0]<b)
		// 	cout<<0<<endl;
		// else
		// for(long long int i=vec.size()-1; i>=0; i--)
		// {
		// 	if(solve(vec, i, b))
		// 	{
		// 		cout<<i+1<<endl;
		// 		break;
		// 	}
			
		// }

		for(int i=0; i<vec.size(); i++)
		{
			sum+=vec[i];
			if(sum/(i*1.0+1)>=b)
				count++;
			else
				break;
		}
		cout<<count<<endl;

	}	
	return 0;
}