/*
##################################################
#             Ariful Islam Farhad                #
#        Computer Science and Engineering        #
# Shahjalal University of Science and Technology #
#         arifulfarhad300@gmail.com              #
##################################################
*/
#include<bits/stdc++.h>
using namespace std;
bool prime[(int)1e6 + 1];
void SieveOfEratosthenes(int n= (int)1e6)
{


    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {

        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

}

int main()
{
  int n;
  cin>>n;
  SieveOfEratosthenes();

  while(n--){
    long long k;
    cin>>k;
    double f = sqrt(k);
    if(k==1)
      cout<<"NO"<<endl;
    else if(ceil(f)==floor(f))
      if(prime[(int)f])
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}
