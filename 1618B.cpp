#include<bits/stdc++.h>
using namespace std;
int main()
{
	int c;
	cin>>c;
	while(c--)
	{

		int d;
		cin>>d;
		vector<string> vec;
		int k=d-2;
		int i;
		while(k--)
		{
			string s;

			cin>>s;
			vec.push_back(s);
			
		}
		for(i=0; i<d-2; i++)
		{
			if(i!=d-3)
			{
				if(vec[i][1]!=vec[i+1][0]){
					char x =vec[i][1];
					char y=vec[i+1][0];
					string s="";
					s+=x; 
					s+=y;
					
					
					auto it = vec.begin()+i+1;
					vec.insert(it, s);
				}
			}
			else 
			{
				if(vec.size()!=d-1)
				{
					char x =vec[i][1];
					
					string s="";
					s+=x; 
					s+=x;
					
					auto it = vec.begin()+i+1;
					vec.insert(it, s);
				}
			}
		}


		// for(auto va: vec){
		// 	cout<<va<< " ";
		// }
		// cout<<endl;

		cout<<vec[0][0];
		for(i=0; i<vec.size()-1; i++)
		{
			
				cout<<vec[i+1][0];
			
		}
		cout<<vec[vec.size()-1][1]<<endl;
	}	
	return 0;
}