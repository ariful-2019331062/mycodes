#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> &vec)
{
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int t,n, a, b;
    cin>>t;
    while(t--)
    {
        vector<int>x, y, c;
        cin>>n>>a>>b;
        for(int i=1; i<=n; i++)
        {
            if(i>a && i!=b)
                x.push_back(i);
            if(i<b && i!=a)
                y.push_back(i);

        }
        
            c.push_back(a);

            for(int i=0; i<x.size(); i++)
            {
                c.push_back(x[i]);
            }
            c.push_back(b);
            for(int j=0; j<y.size(); j++)
            {
                if(find(c.begin(), c.end(), y[j])==c.end())
                {
                    c.push_back(y[j]);
                }
            }
            for(int i =0; i<c.size(); i++)
            {
                cout<<c[i]<<" ";
            }
            cout<<endl;
        

        else
            cout<<-1<<endl;

    }
    return 0;
}
