// #include<bits/stdc++.h>
// using namespace std;

// void checkbits(int n, map<int, int>& mp)
// {

   
//     int binaryNum[32];
 	
//     int i = 0;
//     while (n > 0) {
 
        
//         if(n%2==1)
//         	mp[i]++;
//         n = n / 2;
//         i++;
//     }
// }
// void checkhighest(int n, map<int, int>& mp)
// {
// 	int max = INT_MIN;
// 	for(auto val: mp){
// 		if(val.second>max)
// 			max=val.second;

// 	}
// 	cout<<n-max<<endl;

// }

// int main()
// {
// 	int x;
// 	cin>>x;
	
// 	while(x--){
		
// 		int a, b;
// 		cin>>a>>b;
// 		// for(int i=1; i<=b; i++)
// 		// {
// 		// 	checkbits(i, mp);
// 		// }
// 		// checkhighest(b-a+1, mp);
// 		if(a==1)
// 			if(b%2==0)
// 				cout<<b/2<<endl;
// 			else
// 				cout<<b/2+1<<endl;
// 		else

// 		{
// 			int x=(a%2==0)?a/2: a/2+1;
// 			int y= (b%2==0)?b/2: b/2+1;
// 			cout<<y-x<<endl;
// 		}

// 	}
// 	return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;

    cin >> n;
    long long minn = INT_MAX, maxx = INT_MIN;
    vector<long long> vec(n);
    bool flag1 = true, flag2 = true;
    for (int i = 0; i < n; i++)
    {

      cin >> vec[i];
    }
    int starting, ending;
    
    for (int i = 0, j = n - 1; i <= j; i++, j--)
    {
      if (vec[i] > vec[i + 1] && flag1)
      {
        starting = i;
        flag1 = false;
      }

      if (vec[j] < vec[j - 1] && flag2)
      {
        ending = j;
        flag2 = false;
      }
    }
    maxx = *max_element(vec.begin() + starting, vec.begin() + ending + 1);
    minn = *min_element(vec.begin() + starting, vec.begin() + ending + 1);
    cout << maxx - minn << endl;
  }
}