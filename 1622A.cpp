#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long l;
	cin>>l;
	for(long long i=0;i<l ;i++)
	{
		long long aaa, bbb, ccc;
		cin>>aaa>>bbb>>ccc;
		if(aaa==bbb||bbb==ccc||ccc==aaa){
			if(aaa==bbb)
			{
				if(ccc%2==0)
					cout<<"YES"<<'\n';
				else
					cout<<"NO"<<'\n';
			}
			else if(aaa==ccc)
			{
				if(bbb%2==0)
					cout<<"YES"<<'\n';
				else
					cout<<"NO"<<'\n';
			}else if(ccc==bbb)
			{
				if(aaa%2==0)
					cout<<"YES"<<'\n';
				else
					cout<<"NO"<<'\n';
			}
		}

		else
		{
			vector<long long> vectorvec;
			vectorvec.push_back(aaa);
			vectorvec.push_back(bbb);
			vectorvec.push_back(ccc);
			sort(vectorvec.begin(), vectorvec.end());

			if(vectorvec[0]+vectorvec[1]==vectorvec[2])
				cout<<"YES"<<'\n';
			else
				cout<<"NO"<<'\n';

		}
	}	
	return 0;
}