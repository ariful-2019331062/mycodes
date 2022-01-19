#include <bits/stdc++.h>
using namespace std;
bool isright(int a, int b, int c)
{
  if (a - b == b - c)
    return true;
  else
    return false;
}
int main()
{
  int t;

  cin >> t;
  while (t--)
  {
    long long int a, b, c;
    cin >> a >> b >> c;
    if (isright(a, b, c))
      cout << "YES" << endl;
    else
    {
      if (b > a && b > c)
      {
        cout << "NO" << endl;
      }
    }
  }

  return 0;
}