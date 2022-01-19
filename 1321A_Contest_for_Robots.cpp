#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int first=0, second=0;
	vector<int> fst, snd;
	for(int i=0; i<n; i++)	{
		int c;
		cin>>c;
		fst.push_back(c);

	}
	for(int i=0; i<n; i++)	{
		int c;
		cin>>c;
		snd.push_back(c);

	}

	for(int i=0; i<n; i++){
		if(fst[i]==1 && snd[i]==0)
			first++;
		else if(fst[i]==0 && snd[i]==1)
			second++;
	}
	if(first<=0)
		cout<<-1<<endl;
	else
		cout<<second/first +1<<endl;
	return 0;
}