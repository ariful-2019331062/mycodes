#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--){
		vector<char> vec1(3), vec2(2);
		for(int i=0; i<3; i++)
			cin>>vec1[i];
		for(int i=0; i<2; i++)
			cin>>vec2[i];
		for(int i=0; i<3; i++)
			if(find(vec2.begin(), vec2.end(), vec1[i])!=vec2.end())
			{
				cout<<vec1[i]<<endl;
				break;
			}

	}	
	return 0;
}