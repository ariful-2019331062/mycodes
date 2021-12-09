#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0;
	bool flag = false;
	vector<int> vec;
	for(int i=0;i<6; i++)
	{
		int n;
		cin>>n;
		vec.push_back(n);
		sum+=n;

	}	
	if(sum%2==1)
		flag = false;
	else if(sum==0)
		flag =true;
	else{
		auto it = *max_element(vec.begin(), vec.end());
		if(it>=sum/2)
			flag = false;
		else
			for(int i=0; i<6; i++)
			{
				for(int j=0; j<6; j++)
				{
					for(int k=0; k<6; k++)
					{
						if(i!=j && i!=k && j!=k && vec[i]+vec[j]+vec[k] == sum/2)
						{
							flag=true;
							break;
						}


					}
					if(flag==true)
						break;
				}
				if(flag==true)
						break;
			}
	}
	if(flag)	
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}