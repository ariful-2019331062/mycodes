#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &vec, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
       
        if (vec[mid] == x)
            return mid;
 
        if (vec[mid] > x)
            return binarySearch(vec, l, mid - 1, x);
 
        
        return binarySearch(vec, mid + 1, r, x);
    }
 
    
    return r;
}


int main()
{
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0 ;i<n; i++)
		cin>>vec[i];
	sort(vec.begin(), vec.end());
	int q;
	cin>>q;
	for(int i=0; i<q; i++){
		int m;
		cin>>m;
		int count =0;
		
			auto upper=upper_bound(vec.begin(), vec.end(), m);
			cout<<upper-vec.begin()<<endl;
		
		
	}	
	return 0;
}