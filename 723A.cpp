#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> vec, vec2;

	int a, b, c;
	cin>>a>>b>>c;
	vec.push_back(abs(a-b));
	vec.push_back(abs(b-c));
	vec.push_back(abs(c-a));
	vec2.push_back(vec[0]+vec[1]);
	vec2.push_back(vec[2]+vec[1]);
	vec2.push_back(vec[0]+vec[2]);
	sort(vec2.begin(), vec2.end());
	cout<<vec2[0]<<endl;
	return 0;
}