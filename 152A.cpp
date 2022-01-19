#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin>>n>>m;
	int student[n];
	memset(student, 0, sizeof(student));
	
	 vector<int>vecmarks[m];
	 int marks[n][m];
	 for(int i=0; i<n; i++)
	 {
	 	string s;
	 	cin>>s;

	 	for(int j=0; j<s.size() ;j++)
	 		marks[i][j]= s[j]-'0';
	 }
	 for(int i=0; i<m; i++)
	 	for(int j=0; j<n ;j++)
	 		vecmarks[i].push_back(marks[j][i]);

	 	// for(int i=0; i<m; i++)
	 	// {
	 	// 	for(int j=0; j<n ;j++)
	 	// 	 		{
	 	// 	 			printf("%d ", vecmarks[i][j]);
	 	// 	 		}
	 	// 	 		cout<<endl;
	 	// 	 	}

	 	for(int i=0; i<m; i++)
	 	{
	 		int mx = *max_element(vecmarks[i].begin(), vecmarks[i].end());
	 		
	 		for(int j=0; j<n; j++)
	 		{
	 			if(vecmarks[i][j]==mx)
	 				{
	 			
	 					student[j]=1;
	 				}
	 		}
	 		
	 	}

	 	int count=0;
	 	for(int i=0; i<n; i++)
	 	{
	 		if(student[i]==1)
	 			count++;
	 	}
	 	cout<<count<<endl;
	return 0;
}