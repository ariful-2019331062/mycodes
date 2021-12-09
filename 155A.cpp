//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//
//	int n,m, count=0, low, high;
//	cin>>n;
//	cin>>m;
//	low=high=m;
//	for(int i=1;i<n;i++)
//	{
//
//		cin>>m;
//		if(m<low)
//			{ count++;
//				low=m;
//			}
//		else if(m>high)
//			{
//				count++;
//				high=m;
//			}
//	}
//	cout<<count<<endl;
//	return 0;
//}
#include<bits/stdc++.h>
#include<numeric>
#define mod 1000000007
#define lcm(a,b)    a*b/__gcd(a,b)
#define endl '\n'
#define FAsT ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long ll;


int main()
{
	FAsT
	long long int a1, b1, c1, e1, f1, x1, y1;
	cin >> f1;
	while (f1--)
	{
		cin >> x1 >> y1;
		a1 = x1 + y1;
		if (a1 % 2 == 0)
		{
			e1 = a1/2;
			b1 = x1/2;
			c1 = y1/2;
			if((b1+c1)==e1){
				cout<<b1<<" "<<c1<<endl;
			}

			else
			{
				cout<<b1+1<<" "<<c1<<endl;
			}

		}
		else
		{
			cout<<-1<<" "<<-1<<endl;
		}

	}
	return 0;
}
