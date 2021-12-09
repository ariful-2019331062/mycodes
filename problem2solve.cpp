// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int n, count=0;
// 	cin>>n;
// 	vector<int> vec;
// 	int a;
// 	for(int i=0 ;i<n; i++){
// 		cin>>a;
// 		vec.push_back(a);
// 	}
// 	for(int i=0; i<vec.size(); i++)
// 	{
// 		for(int j=0; j<vec.size(); j++){
			
// 			if(vec[j]==1 && (vec[j-1]==0 || vec[j-1]==2) && (vec[j-2]==0 || vec[j-2]==2 )){
// 				//cout<<j-1<< " "<<j<<endl;
// 				int temp = vec[j];
// 				vec[j]=vec[j-1];
// 				vec[j-1]=temp;
// 				//swap(vec[j], vec[j-1]);
// 				count++;
// 	// 			for(int val: vec)
// 	// 	cout<<val<<" ";
// 	// cout<<endl;
// 				break;
// 			}

// 		}
// 	}
// 	// for(int val: vec)
// 	// 	cout<<val<<" ";
// 	// cout<<endl;
// 	auto it= find(vec.begin(), vec.end(), 2);
// 	int pos = it-vec.begin();
// 	cout<<count+pos<<endl;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool flag = true;
	if(n>0 && n<350)
		while(n--){
			int a;
			cin>>a;
			if(a<0 ||a>2)
			{
				flag = false;
				break;
			}
		}
	else flag = false;
	if(flag)	
	return 0;
	else
	{
		cout<<"Invalid input"<<endl;
		return -1;
	}
}