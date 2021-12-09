#include<bits/stdc++.h>
using namespace std;

std::vector<pair<pair<double,double>,pair<double,double> > > coOrdinate;
int mx = INT32_MIN;

int howManyPoints()
{
	int iSecret;
	iSecret = rand() % 15 + 1 + rand() % 10 + rand() % 5;
	return iSecret;
}


pair<double,double> whatpoint(){
	int iSecret1, iSecret2;
	iSecret1 = rand() % 30 + 1;
	iSecret2 = rand() % 30 + 1;
	
	return make_pair(iSecret1,iSecret2);
}


void points(){
	int howManyPoint = howManyPoints();

	// cout<<howManyPoint<<endl;
	mx = max(mx,howManyPoint);
	pair<double,double> p = whatpoint();

	for(int i =0; i<howManyPoint; i++)
	{
		pair<double,double> firstpoint = whatpoint();
		if(p.first == firstpoint.first)
			firstpoint = whatpoint();

		
		pair<double, double> secondpoint;
		if(p.first>firstpoint.first)
			secondpoint.first = (abs(firstpoint.first - p.first))+p.first;
		else
			secondpoint.first = p.first - abs(firstpoint.first - p.first);
		// secondpoint.second = p.second + ((p.first - firstpoint.first)*(secondpoint.first-p.first)/(p.second - firstpoint.second));
		secondpoint.second = p.second + (((p.second - firstpoint.second)/(p.first- firstpoint.first))*(secondpoint.first - p.first));
		coOrdinate.push_back({firstpoint,secondpoint});
	}
}

int main()
{
	srand(time(NULL));
	int p = 10 + rand()%41;
	while(p--) {
		points();		
	}
	int sz = coOrdinate.size();
 random_shuffle(coOrdinate.begin(), coOrdinate.end());
	// cout << mx << '\n';
	cout << sz << '\n';
	for(auto v : coOrdinate) {
			cout << v.first.first << " " << v.first.second << " ";
			cout << v.second.first << " " << v.second.second ;
		cout << '\n';
	}
	return 0;
}