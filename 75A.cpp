#include<bits/stdc++.h>
using namespace std;


long long cutZero(string a){
	string first ="";
	for(int i=0; i<a.size(); i++){
		if(a[i]!='0')
			first+=a[i];
	}
	return stoi(first);
}


long long afterSum(string a, string b){
	
	return cutZero(a)+cutZero(b);
}
int main()
{
	string first, second;
	cin>>first>>second;
	long long firstNum=stoi(first), secondNum=stoi(second);
	long long sumNum=firstNum+secondNum;
	


	if(cutZero(to_string(sumNum))==afterSum(first, second))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}