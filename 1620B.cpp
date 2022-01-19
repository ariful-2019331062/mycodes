#include<bits/stdc++.h>
using namespace std;
double area (int x1, int y1, int x2, int y2, int x3, int y3)
{
	return 0.5*(x1*(y2-y1)+ x2*(y3-y1)+ x3*(y1-y2));
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int w, h, point=0;
		cin>>w>>h;

		vector <pair<int, int>> vecHorO, vecHorH, vecVerO, vecVerW;
		int c1;
		cin>>c1;
		for(int i=0; i<c1; i++)
		{
			int z;
			cin>>z;
			vecHorO.push_back({z, 0});

		}
		cin>>c1;
		for(int i=0; i<c1; i++)
		{
			int z;
			cin>>z;
			vecHorH.push_back({z, w});
		}
		cin>>c1;
		for(int i=0; i<c1; i++)
		{
			int z;
			cin>>z;
			vecHorH.push_back({0, z});
		}
		for(int i=0; i<c1; i++)
		{
			int z;
			cin>>z;
			vecHorH.push_back({w, z});
		}

		

	}
	return 0;
}