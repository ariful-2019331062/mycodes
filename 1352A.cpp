#include<bits/stdc++.h>
using namespace std;

int sizef(int n){
	string ss = to_string(n);
	return ss.size();
}
void printvec(vector<int> &vec)
{
	for(int i=0; i<vec.size(); i++)
	{
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	for(int i =0; i<n; i++)
	{
		
		// vector<int> v;
		int m;
		cin>>m;
		int size = sizef(m);
		if(m==10000)
			v.push_back(m);

		else
			for(int j=pow(10, size-1); j>=1; j=j/10)
			{
				
				int rem= m%j;

				if(rem == 0)
				{
					v.push_back(m);
					break;
				}
				else
				{
					if((m-rem)!=0)
						v.push_back(m-rem);
					else
						;
					m=rem;
				}
			}
			cout<<v.size()<<endl;
			printvec(v);
			v.clear();



		}	
		return 0;
	}