#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b, count;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		count=0;
		cin>>a>>b;
		if(a>b){
			int dif=a-b;

			count+=dif/10;
			dif=dif%10;

			count+=dif/9;
			dif=dif%9;

			count+=dif/8;
			dif=dif%8;

			count+=dif/7;
			
			dif=dif%7;

			count+=dif/6;
			
			dif=dif%6;

			count+=dif/5;
			
			dif=dif%5;

			count+=dif/4;
			
			dif=dif%4;

			count+=dif/3;
			
			dif=dif%3;

			count+=dif/2;
			
			dif=dif%2;

			count+=dif/1;
			
			dif=dif%1;

			cout<<count<<endl;
		}
		else{
			int dif=b-a;

			
			count+=dif/10;
			dif=dif%10;

			count+=dif/9;
			dif=dif%9;

			count+=dif/8;
			dif=dif%8;

			count+=dif/7;
			
			dif=dif%7;

			count+=dif/6;
			
			dif=dif%6;

			count+=dif/5;
			
			dif=dif%5;

			count+=dif/4;
			
			dif=dif%4;

			count+=dif/3;
			
			dif=dif%3;

			count+=dif/2;
			
			dif=dif%2;

			count+=dif/1;
			
			dif=dif%1;

			cout<<count<<endl;
		}
	}
	return 0;
}