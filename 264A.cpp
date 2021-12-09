
#include<bits/stdc++.h>
using namespace std;
int main()

{
    char s[1000001];
int left[1000002];
int right[1000002];
int x=0;
    cin >>s;
    int n = strlen(s);

    right[0] = n + 1;
    right[n + 1] = 0;

    int l = 0, r = n + 1;
        for (int i = 1; i <= n; ++i)
    {
        right[l] = i;
        left[i] = l;

        right[i] = r;
        left[r] = i;

        switch (s[i-1])
        {
        case 'l':
            r = i;
            break;
        case 'r':
            l = i;
            break;
        default:
            break;
        }
    }

    x = 0;
    while (n--)
    {
        x = right[x];
        cout <<x<<endl;
    }

    return 0;
}