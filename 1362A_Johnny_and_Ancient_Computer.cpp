#include<bits/stdc++.h>
using namespace std;

int solve(long long a, long long b)
{
    int i;
    double d;

    if(a>b)
    {
        if(a%2==0)
        {
            for(i=1; true; i++)
            {
                d = a>>i;

                if(d==(double)b)
                {
                    return ceil(i/3.0);
                }
                else if(d<(double)b)
                    return -1;

            }
        }
        else
        {
            return -1;
        }
    }

    else if(a<b)
    {
        if(b%2==0)
        {
            for(i=0; true; i++)
            {
                d = (double)(a<<i);
                if(d==(double)b)
                {
                    return ceil(i/3.0);
                }
                else if(d>(double)b)
                    return -1;

            }

        }
        else
            return -1;
    }
    else
    {
        return 0;
    }
}


int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long int a, b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }

    return 0;
}
