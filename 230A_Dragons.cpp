#include<bits/stdc++.h>
using namespace std;

int main()
{
  int s, k;
  bool flag = true;
  cin>>s>>k;
  multimap<int, int> mp;
  for(int i =0; i<k; i++){
    int x, y;
    cin>>x>>y;
    mp.insert({x,y});
  }
  for(auto &val: mp){
    if(val.first>=s){
      flag = false;
      break;
    }
    s+=val.second;
  }
  if(flag)
    cout<<"YES"<<endl;
  else
    cout<<"NO"<<endl;


}
