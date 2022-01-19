#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long start=INT_MAX, end=INT_MIN;
		vector<vector<long long> > vec;
		int n;
		cin>>n;
		long long int l, r, k;

		for(int i=0; i<n; i++){
			vector<long long> vecc;

			cin>>l>>r>>k;

			vecc.push_back(l);
			vecc.push_back(r);
			vecc.push_back(k);
			vec.push_back(vecc);
			
		}

		
		long long num=0, cost =0, oldcost=0, oldnum=0;

		vector<vector<long long>> newVec;
		for(int i=0; i<n; i++){
			if(start>vec[i][0])
				start=vec[i][0];
			if(end<vec[i][1])
				end=vec[i][1];


			if(i==0)
			{
				
				cost+=vec[i][2];
				oldcost+=vec[i][2];

				num+=(end-start+1);
				oldnum+=(end-start+1);

				cout<<cost<<endl;
				newVec.push_back(vec[i]);

			}
			else
			{
				oldnum = (end-start+1);
				//cout<<"oldnum  "<<oldnum<<endl;
				if(oldnum>num)
				{
					if(start>=vec[i][0] && end<vec[i][1] || start>vec[i][0] && end<=vec[i][1])
					{
						if(cost>vec[i][2])
						{	
							newVec.erase(newVec.begin(), newVec.end());
							newVec.push_back(vec[i]);
						}
					}
					else{
						num=oldnum;
						newVec.push_back(vec[i]);
					}
				}
				else if(oldnum == num)
				{
					if(start>=vec[i][0] && end<=vec[i][1])
					{
						if(cost>vec[i][2])
						{	
							newVec.erase(newVec.begin(), newVec.end());
							newVec.push_back(vec[i]);
						}
					}
					else

					{
						for(int j=0; j<newVec.size(); j++)
						{
							if(newVec[j][0]==vec[i][0] || newVec[j][1]==vec[i][1])
								if(newVec[j][2]>vec[i][2])
									newVec[j] = vec[i];
							}
						}
					}
					
					cost = 0;
					for(auto val: newVec)
					{
						cost+=val[2];
					}
					cout<<cost<<endl;

				}
			}
		}

		return 0;
	}