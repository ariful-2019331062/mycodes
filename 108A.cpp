#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

bool solvev(int i)
{
	
	int hour = (i/60)%24;
	
	int mint = i%60;
	// cout<<hour<<" "<<mint<<endl;


	string time = "";
	if(to_string(hour).size()<2)
	{
		time+='0';
		time+=to_string(hour);
	}
	else{
		time = to_string(hour);
	}



	string min = "";
	if(to_string(mint).size()<2)
	{
		min+='0';
		min+=to_string(mint);
		
	}
	else{
		min = to_string(mint);
	}

	for(int i=0, j=1; i<2; i++, j--)
	{
		if(time[i]!=min[j])
		{

			return false;
		}
	}
	cout<<time<<":"<<min<<endl;
	return true;
}





int main()
{
	int h, m;
	scanf("%d:%d", &h, &m);
	int total_min=h*60+m;
	// cout<<h<<endl;
	// cout<<m<<endl;
	// cout<<total_min<<endl;

	for(int i=total_min+1; i<=24*60; i++){

		if(solvev(i)){

			break;
		}
	}
	return 0;
}