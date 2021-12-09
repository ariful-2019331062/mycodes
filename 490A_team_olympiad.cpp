#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, t1=0, t2=0, t3=0;
	cin>>n;
	vector<int>vec;
	for(int i=0; i<n; i++)
	{
		int a;
		cin>>a;
		if(a==1)
			t1++;
		else if(a==2)
			t2++;
		else
			t3++;
		vec.push_back(a);
	}	

	int team_number = min({t1,t2,t3});
	cout<<team_number<<endl;
	for(int i=0; i<team_number; i++)
	{
		cout<<find(vec.begin(), vec.end(), 1)-vec.begin()+1<<" "<<find(vec.begin(), vec.end(), 2)-vec.begin()+1<<" "<<find(vec.begin(), vec.end(), 3)-vec.begin()+1<<endl;
		vec[find(vec.begin(), vec.end(), 1)-vec.begin()]=0;
		vec[find(vec.begin(), vec.end(), 2)-vec.begin()]=0;
		vec[find(vec.begin(), vec.end(), 3)-vec.begin()]=0;
		}
	return 0;
}