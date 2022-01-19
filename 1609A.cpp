#include<bits/stdc++.h>
using namespace std;
int divideval(int x){
	int count =0; 
	while(x%2==0)
	{
		count++;
		x=x/2;
	}
	return count;
}
int oddsum(multiset<int> &m)
{
	int count=0; 
	for(int val: m)
		count+=val;
	auto it = --m.end();

	count -= *it;
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		multiset<int> even, odd;
		int logval=0;
		long long int highest1 =0;
		if(n==1)
		{
			int a;
			cin>>a;
			cout<<a<<endl;

		}
		else
		{
			while(n--)
			{
				int a;
				cin>>a;
				if(a%2==0)
				{
					even.insert(a);
					logval+=divideval(a);
				}
				else
					odd.insert(a);
			}

			if(odd.size()==0)
			{
				auto it = (--even.end());
				logval-=divideval(*it);
				highest1 = *it;
				for(int i=1; i<=logval; i++)
					highest1 *= 2;
				highest1 += even.size()-1;
				cout<<highest1<<endl;
			}
			else if(even.size()==0)
			{
				for(int val: odd)
					highest1+=val;
				cout<<highest1<<endl;
			}
			else
			{
				auto it = (--odd.end());

				highest1 = *it;
				for(int i=1; i<=logval; i++)
					highest1 *= 2;
				highest1 += even.size()+ oddsum(odd);
				cout<<highest1<<endl;
			}
		}
	}

	return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     long long tc;
//     cin >> tc;
//     while(tc--)
//     {
//         long long a,b,c;
//         vector<pair<long long,long long> >vp;
//         long long n ;
//         cin >> n ;
//         vector<long long>v(n);
//         for(long long& ss:v)
//         {
//             cin >> ss;
//         }
//         long long cnt = 0;
//         long long cnt1 = 0;
//         for(long long i=0;i<n;i++)
//         {
//             a = v[i];
//             while(a%2==0)
//             {
//                 a = a/2;
//                 cnt++;
//             }
//             vp.push_back({a,cnt});
//             cnt1+=a;
//             cnt = 0;
//         }
//         sort(vp.begin(),vp.end(),greater<>());
//         long long x = vp[0].first;
//         cnt1 -= x;
//         for(long long i=0;i<n;i++)
//         {
//             for(long long j=0;j<vp[i].second;j++)
//             {
//                 x *= 2;
//             }
//         }
//         cout << x+cnt1 << endl;


//     }

// }