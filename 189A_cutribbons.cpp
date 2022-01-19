#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b, c, count=INT_MIN;
	double k;
	cin>>n>>a>>b>>c;
	bool flag=true;
	if(a==1||b==1||c==1)
		cout<<n<<endl;
	else
	{
		for(int i=0; i*a<=n; i++)	
		{
			for(int j=0; j*b<=n ;j++)	
			{
				
				double f= (n-i*a*1.0-j*b*1.0)/c*1.0;
				int l = (n-i*a-j*b*1.0)/c*1.0;
				if(f-l==0.0 && (n-i*a-j*b-l*c)==0 && l>=0)
				{
					// cout<<i<< " "<<j<< " "<<l<< " "<<(n-i*a-j*b-l*c)<<endl;
					count=max(count, i+j+l);
				}
					// if(i*a+j*b+k*c==n)
					// {
					// 	count=max(count, i+j+k);
					// 	break;
					// }
				
			}
		}
		cout<<count<<endl;
	}
	return 0;
}