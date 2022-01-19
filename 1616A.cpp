#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	cin>>l;
	while(l--){
		int n;
		cin>>n; 
		vector<int> vectorA;
		for(int i=0; i<n; i++){
			int temporary;
			cin>>temporary;
			if(find(vectorA.begin(), vectorA.end(), temporary)==vectorA.end())
			{
				vectorA.push_back(temporary);

			}
			else if(temporary!=0 && find(vectorA.begin(), vectorA.end(), -temporary)==vectorA.end()){
				vectorA.push_back(-temporary);
			}
		}
		
		cout<<vectorA.size()<<endl;


	}	
	return 0;
}