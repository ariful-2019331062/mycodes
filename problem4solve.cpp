#include <bits/stdc++.h>
using namespace std;

long long totalCount(vector<long long>&num)
{
    long long n=num.size();
    long long l = 0, h = n - 1;

    
    while (l <= h)
    {

        if (num[l] <= num[h]) {
            return l;
        }

        long long m = (l + h) / 2;

        
        long long next = (m + 1) % n;
        long long prev = (m - 1 + n) % n;



        if (num[m] <= num[next] && num[m] <= num[prev]) {
            return m;
        }



        else if (num[m] <= num[h]) {
            h = m - 1;
        }

        

        else if (num[m] >= num[l]) {
            l = m + 1;
        }
    }

    
    return -1;
}

int main()
{ 
    long long n, t;
    cin>>t;
    while(t--){
        cin>>n;
        vector<long long> vec;

        while(n!=0){
            vec.push_back(n);
            cin>>n;
        }


        long long count = totalCount(vec);
        long long count2 = vec.size() - count;
        // cout<<count<<" "<<count2<<endl;
        long long minn = min(count, count2);
        cout<<minn<<endl;
    }
    return 0;
}