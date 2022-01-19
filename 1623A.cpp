#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n, m, xi, yi, xf, yf;
		cin>>n>>m>>xi>>yi>>xf>>yf;
		int time =0; 
		int	dx = 1, dy=1;
		if(xi==n)
			dx=-dx;
		if(yi==m)
			dy = -dy;
		while(xi!=xf && yi!=yf){
			xi = xi+dx;
			yi = yi+dy;
			if(xi==1 || xi==n)
				dx= -dx;
			if(yi ==1 || yi==m)
				dy = -dy;
			time++;

		}
		cout<<time<<endl;

	}	
	return 0;
}