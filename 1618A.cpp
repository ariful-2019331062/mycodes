#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int c;
	cin>>c;
	while(c--)

	{
		vector<long long int> vec(7);
		bool flag= true;
		for(long long int i=0; i<7; i++)
			cin>>vec[i];


		cout<<vec[0]<<" ";
		
		vec.erase(vec.begin());
		
		for(long long int i=0; i<vec.size(); i++)
		{
			for(long long int j=0; j<vec.size(); j++)
			{
				if((vec[i]+vec[j])==vec[4])
				{
					cout<<vec[i]<<" "<<vec[j]<<endl;
					flag = false;
					break;
				}
			}
				if(flag==false)
					break;
		}
	}

	return 0;
}