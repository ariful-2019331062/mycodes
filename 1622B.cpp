#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l;
	cin>>l;
	for(int i=0; i<l; i++){
		int n;
		cin>>n;
		vector<int> vectora, vectord, vectorc;
		map<int, int> map1, map2;
		
		for(int i=0; i<n; i++)
		{
			int x;
			cin>>x;
			vectora.push_back(x);
			
		}
		
		string s;
		cin>>s;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='1'){
				vectorc.push_back(i);
				map1.insert({vectora[i], i});
			}
			else{
				vectord.push_back(i);
				map2.insert({vectora[i], i});
			}
		}




		vector<int> vecyes, vecno;
		int need = n-vectorc.size()+1;
		int needcopy=need;
		for(int i=0; i<vectorc.size(); i++)
		{
			vecyes.push_back(needcopy++);

		}
		for(int i=1; i<=vectord.size(); i++)
		{
			vecno.push_back(i);
		}


		int startnow = 0;
		for(auto value: map1){
			
			vectora[value.second]=vecyes[startnow];
			startnow++;
		}
		startnow = 0;
		for(auto value: map2){

			vectora[value.second]=vecno[startnow];
			startnow++;
		}

		for(auto value: vectora){
			cout<<value<<" ";
		}
		cout<<endl;

	}	
	return 0;
}