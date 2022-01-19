#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	vector<int> list1;
	
	list1.push_back(a);
	list1.push_back(b);
	list1.push_back(c);
	list1.push_back(d);
	
	sort(list1.begin(), list1.end());

	cout<<list1[3]-list1[0]<<" "<<list1[3]-list1[1]<<" "<<list1[3]-list1[2]<<endl;
	return 0;
}