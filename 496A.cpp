#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin>>a;
	vector<int> vec(a), forsort;

	for(int i=0; i<a; i++){
		cin>>vec[i];
	}
	for(int i=1 ; i<a-1; i++)
	{
		int maximum=0;
		vector<int> vecb;
		for(int j=0; j<vec.size()-1; j++){
			if(j+1==i){
				// cout<<vec[j+2]-vec[j]<<" ";
				vecb.push_back( vec[j+2]-vec[j]);
				j++;
			}
			else{
				// cout<<vec[j+1]-vec[j]<<" ";
				vecb.push_back( vec[j+1]-vec[j]);
			}
		}
			// cout<<endl;

		// cout<<*max_element(vecb.begin(), vecb.end())<<endl;
		forsort.push_back(*max_element(vecb.begin(), vecb.end()));
	}
	cout<<*min_element(forsort.begin(), forsort.end())<<endl;
	return 0;
}