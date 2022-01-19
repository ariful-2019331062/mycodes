#include<bits/stdc++.h>
using namespace std;
bool lexicographicallysmaller(string a, string b){

	for(int i=a.size()-1; i>=0; i--)
		a+=a[i];

	//cout<<a<<"-----"<<b<<endl;
	if(a.compare(b)<0)
		return true;
	return false;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count=0;
		string f = "", m="";
		int i;
		for(i=0; i<s.size(); i++)
		{

			f+=s[i];



			if(lexicographicallysmaller(f, s))
			{
				break;
			}
		}
		
			cout<<f;
			for(int i=f.size()-1; i>=0; i--){
				cout<<f[i];
			}
			cout<<endl;
		
	}

	return 0;
}
///********************** Bismillahir Rahmanir Rahim *****************///


///Mahmud48
///CSE,SUST
///01752443577


// #include<bits/stdc++.h>
// using namespace std;

// ///*********************** Template Start Here ***********************///
// ///************************ C o n t a i n e r ************************///
// typedef long long ll;
// typedef unsigned long long ull;
// typedef vector<ll> vl;
// typedef vector<int> vi;
// typedef vector<char> vc;
// typedef vector<string> vs;
// typedef vector<int>::iterator vit;
// typedef set<int> si;
// typedef map<int, int> mii;
// typedef map<string, int> msi;
// typedef pair<int, int> pii;
// typedef pair<string, int> psi;
// typedef pair<int, string> pis;
// typedef pair<string, string> pss;

// ///**************************** M a r c o ****************************///
// #define f first
// #define s second
// #define endl '\n'
// #define sp <<" "<<
// #define pb push_back
// #define MOD 1000000007
// #define gcd(a,b) __gcd(a,b)
// #define fora(a) for(auto u:a)
// #define lcm(a,b) (a*(b/gcd(a,b)))
// #define all(a) (a).begin(),(a).end()
// #define rall(a) (a).rbegin(),(a).rend()
// #define mem(a,b) memset(a, b, sizeof(a))
// #define test int t; cin>>t; while(t--)
// #define forn(i,n) for(auto i=0; i<n; i++)
// #define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
// #define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
// #define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define file(); freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// #define fori(a,b,c) {for(a = c.begin(); a!=b; a++) cout<< *a<< " "; cout<<endl;}
// #define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);

// ///**************************** C o n s t a n t ****************************///
// const double PI = acos(-1);
// const double eps = 1e-9;
// const int inf = 2000000000;
// const ll infLL = 9000000000000000000;

// ll fact(int n){
//     ll f=1;
//     for (int i = 1; i <= n; ++i)
//     {
//         f*=i;
//     }
//     return f;
// }

// int main()
// {
//     fast();
//     test{
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int i;
//         for (i = 0; i < n-1; ++i)
//         {
//         	if((i>0 && s[i]>=s[i+1]) || (i==0 && s[i]>s[i+1]))
//         		continue;
//         	else
//         		break;
//         }
//         // cout<<i<<endl;
//         for (int j = 0; j <= i; ++j)
//         	cout<<s[j];
//         for (int j = i; j >= 0; j--)
//         	cout<<s[j];
//         cout<<endl;
//     }
//     return 0;
// }


// 4
// 26
// zyxwvutsrqponmlkjihgfedcba
// 9
// cbacbacba
// 3
// aaa
// 10
// aaaaaaaaaa