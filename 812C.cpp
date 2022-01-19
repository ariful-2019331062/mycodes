// #include<bits/stdc++.h>
// using namespace std;
// vector<pair<long long , long long> > vec2;
// long long int value(int n){

//     long long val=0;
    
//     vector<long long> vec;
//     for(int i=1; i<=vec2.size(); i++){
//         vec.push_back(vec2[i-1].first+n*vec2[i-1].second);
//     }
//     sort(vec.begin(), vec.end());
    
    
//     for(int i=0; i<n; i++){
       
//         val+=vec[i];
//     }
//     return val;
    
    
// }
// int main()
// {
//     long long int n, s, largeval=0;
//     cin>>n>>s;
   
    
   


//     long long l=sqrt(s)>n? n: sqrt(s);


//     for(long long i=1; i<=n; i++){
//         long long x;
//         cin>>x;
        
    
//         vec2.push_back({x, i});
        
//     }

    



//     // cout<<vec2.size()<<" "<<l<<endl;

//     if(vec2.size()>0)
//     {
//         long long val, val2;
    
//         for(long long i=0; i<=l; i++){
//             val = value(i);
//             if(i==l && val<s)
//             {
//                 val2 = i;
//                 val=value(i);
//             }
//             else if(val>s)
//             {
//                 val2 = i-1;
//                 val=value(i-1);
//                 break;
//             }
//         }
    
//         sort(vec2.begin(), vec2.end());
    
    
    
//         for(long long i=0; i<=l; i++){
//             long long vall = value(i);
//             if(i==l && vall<=s){
    
                
//                 if(i>val2){
//                         cout<<i<<" "<<vall<<endl;
//                         break;
//                 }
//                 else if(i==val2)
//                 {
//                     if(val>vall){
//                     cout<<i<<" "<<vall<<endl;
// break;
//                 }
//                 else{
//                     cout<<val2<<" "<<val<<endl;
//                     break;
//                 }
//                 }
//                 else{
//                     cout<<val2<<" "<<val<<endl;
//                     break;
//                 }
    
                
    
//                 break;
//             }
//             else if(vall>s)
//             {
//                 vall = value(i-1);
                
    
//                 if(i-1>val2){
//                         cout<<i-1<<" "<<vall<<endl;
//                         break;
//                 }
//                 else if(i-1==val2)
//                 {
//                     if(val>vall){
//                     cout<<i-1<<" "<<vall<<endl;
//                     break;
//                 }

//                 else{

//                     cout<<val2<<" "<<val<<endl;
//                     break;
//                 }
//                 }
//                 else{
//                     cout<<val2<<" "<<val<<endl;
//                     break;
//                 }
    
                
    
//                 break;
//             }
//         }
//     }
//         else
//             cout<<0<<" "<<0<<endl;

//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

//{
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b);
#define siii(a,b,c) scanf("%d %d %d",&a,&b,&c);

#define sl(a) scanf("%lld",&a)
#define sll(a,b) scanf("%lld %lld",&a,&b);
#define slll(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);

#define outi(a) printf("%d\n",a)
#define outii(a,b) printf("%d %d\n",a,b)
#define outis(a) printf(" %d",a)

#define outl(a) printf("%lld\n",a)
#define outll(a,b) printf("%lld %lld\n",a,b)
#define outls(a) printf(" %lld",a)

#define cel(n,k) ((n-1)/k+1)
#define sets(a) memset(a, -1, sizeof(a))
#define clr(a) memset(a, 0, sizeof(a))
#define max(a,b) ((a)>(b)? (a):(b))
#define min(a,b) ((a)<(b)? (a):(b))
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1;i<=n;i++)
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define ff first
#define ss second
#define INF 10000007
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long i64;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
//}

i64 n, k, x;
pll a[100005];

bool cmp(pll p, pll q){
    return (p.ff+p.ss*x) < (q.ff+q.ss*x);
}

int can(i64 q){
    i64 tmp= k, cnt= 0;

    x= q;
    sort(a+1,a+n+1,cmp);

    fr1(n){
        tmp-= a[i].ff+a[i].ss*q;

        if(tmp<0)
            break;

        cnt++;
    }

    return cnt>=q;
}

i64 getcost(i64 q){
    x= q;
    sort(a+1,a+n+1,cmp);
    i64 cost= 0;

    fr1(q){
        cost+= a[i].ff+a[i].ss*q;
    }

    return cost;
}

int main(){
    sll(n,k);

    i64 t;
    fr1(n){
        sl(t);
        a[i]= mp(t,i);
    }

    i64 lo= 0, hi= n;

    while(lo<hi){
        i64 mid= (lo+hi+1)/2;

        if(can(mid))  lo= mid;
        else  hi= mid-1;
    }

    printf("%lld %lld\n",lo,getcost(lo));
}