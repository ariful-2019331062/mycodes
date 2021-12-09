

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    while(tc--)
    {
        int a,b,c;
        vector<pair<int,int> >vp;
        int n ;
        cin >> n ;
        vector<int>v(n);
        for(int& ss:v)
        {
            cin >> ss;
        }
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            a = v[i];
            while(a%2==0)
            {
                a = a/2;
                cnt++;
            }
            vp.push_back({a,cnt});
            cnt = 0;
        }
        sort(vp.begin(),vp.end(),greater<>());
        int x = vp[0].first;
        for(int i=0;i<n;i++)
        {
            x *= vp[i].second;
        }
        cout << x << endl;


    }

}
