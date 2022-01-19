#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
	int i;
	if(n==1 || n== 2)
		return 1;
	else
		for (i = 2; i <= sqrt(n)+1; ++i)
		{
			if(n%i==0)
				return 0;
		}
		
		return 1;
	}

	int main()
	{
		int n;
		cin>>n;
		
		for(int i=1; i<=n/2; i++)
		{
			int prime1=isprime(i), prime2=isprime(n-i);
			
			if(prime1==0 && prime2==0)
			{
				cout<<i<< " "<<n-i<<endl;
				break;
			}
		}
		return 0;
	}