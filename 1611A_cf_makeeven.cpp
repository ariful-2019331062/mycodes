#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    bool flag1ofbd= false, flag2 = false;
    int nnnn;
    cin>>nnnn;

    string stttr = to_string(nnnn);
    if(nnnn%2==0)
      cout<<0<<endl;
    else{
      for(int i =0; i<stttr.size(); i++)
      {
        if((stttr[0]-48)%2==0)
        {
          flag1ofbd = true;
          break;
        }
        if(i!=0 && stttr[i]%2==0)
        {
          flag2=true;
        }
      }
      if(flag2)
        cout<<2<<endl;
      else if(flag1ofbd)
        cout<<1<<endl;
      else
        cout<<-1<<endl;
    }
  }
}
