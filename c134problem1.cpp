#include<bits/stdc++.h>
using namespace std;
void generateseed(){
   int ff = rand()%21+20;
   int n=rand()%1451+50;
   cout<<ff<<" "<<n<<endl;
   while(ff--)
   cout<<rand()%20+1<<" "<<rand()%20+1<<" "<<rand()%20+1<<"\n";
}

double minimumangle(multiset<int> &m)
{
    double val = 0;
    for(int v: m)
        val+=v;
    return (180.0/val)*(*m.begin());

}
int main(){
   srand(time(NULL));
   generateseed();
    // int n, count =0, aangle =0, to_be_measured;
    // bool flag = true;
    // cin>>n>>to_be_measured;
    // map<double ,multiset<int>> st;

    // for(int i =0; i<n; i++){
    //     multiset<int> m;
    //     int a,b,c;
    //     cin>>a>>b>>c;
    //     m.insert(a);
    //     m.insert(b);
    //     m.insert(c);
        
    //     st.insert({minimumangle(m), m});

    // }
    // auto it = st.begin();
    // while(aangle<=to_be_measured)
    // {
    //     aangle+=it->first;
    //     it++;
    //     count++;
    //     if(it==st.end() && aangle<=to_be_measured)
    //     {
    //         flag = false;
    //         break;
    //     }


    // }
    // if(flag==false)
    //     cout<<-1<<endl;
    // else
    //     cout<<count<<endl;
    // return 0;
}
/*
17
15 13 20
5 19 3
15 7 2
7 11 13
13 13 1
2 1 1
21 4 21
20 4 5
7 20 15
15 8 14
17 21 15
2 15 16
17 17 6
13 19 18
11 4 9
3 13 3
21 7 6
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n, count=0;
 cin>>n;
 vector<int> vec;
 int a;
 for(int i=0 ;i<n; i++){
     cin>>a;
     vec.push_back(a);
 }
 for(int i=0; i<vec.size(); i++)
 {
     for(int j=0; j<vec.size(); j++){
            
         if(vec[j]==1 && (vec[j-1]==0 || vec[j-1]==2) && (vec[j-2]==0 || vec[j-2]==2 )){
             //cout<<j-1<< " "<<j<<endl;
             int temp = vec[j];
             vec[j]=vec[j-1];
             vec[j-1]=temp;
             //swap(vec[j], vec[j-1]);
             count++;
 //          for(int val: vec)
 //  cout<<val<<" ";
 // cout<<endl;
             break;
         }

     }
 }
 // for(int val: vec)
 //  cout<<val<<" ";
 // cout<<endl;
 auto it= find(vec.begin(), vec.end(), 2);
 int pos = it-vec.begin();
 cout<<count+pos<<endl;
}
