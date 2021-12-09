// #include<bits/stdc++.h>
// using namespace std;
// void generate()
// {
// 	int x=rand()%5000;
// 	int y=rand()%5000;

// 	// cout<<x+y<<endl;
// 	int n=x+y;
// 	for(int i=n-x+1; i<=n; i++)
// 		cout<<i<<" ";
// 	for(int i=1; i<=y; i++)
// 		cout<<i<<" ";
// 	cout<<0<<endl;
// }
// int main()
// {
// 	int n;
// 	srand(time(NULL))
// 	cin>>n;
// 	cout<<n<<endl;
// 	for(int i=0; i<n; i++)
// 		generate();	
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	bool flag = true;
	cin>>t;
	if(t<=10000 && t>=1)	{
		int n;
		while(~scanf("%d", &n))
		{
			if(n<0 || n>1000000000)
				flag=false;

		}
	}
	else
		flag = false;
	if(flag)
	return 0;
	else
	{
		cout<<"Invalid input"<<endl;
		return -1;
	}
}