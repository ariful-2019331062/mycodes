#include<bits/stdc++.h>
using namespace std;
int main()
{
	char myints[] = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
	vector<char> vec (myints, myints + 9);

	
	bool flag=false;
	char trump;

	cin>>trump;
	string firstCard, secondCard;
	cin>>firstCard>>secondCard;
	if(trump == firstCard[1] && secondCard[1]!=trump)
	flag = true;
	else if(trump == firstCard[1] && secondCard[1]==trump)
	{
		int diff= (find(vec.begin(), vec.end(), firstCard[0])-vec.begin())-(find(vec.begin(), vec.end(), secondCard[0])-vec.begin());
		if(diff>0)
			flag = true;
	}
	else if(firstCard[1]==secondCard[1]) {
int diff= (find(vec.begin(), vec.end(), firstCard[0])-vec.begin())-(find(vec.begin(), vec.end(), secondCard[0])-vec.begin());
		if(diff>0)
			flag = true;
	}
	
	
	if(flag)
	cout<<"YES\n";
	else
	cout<<"NO\n";	
	return 0;
}