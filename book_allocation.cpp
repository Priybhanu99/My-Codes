#include <bits/stdc++.h>
using namespace std;


bool is_possible(int* pages,int mid,int m,int n){

	int nos = 1,sum=0;

	for (int i = 0; i < n; ++i)
	{
		//imp line
		if(pages[i]>mid){
			return false;
		}
		sum += pages[i];

		if(sum>mid){
			nos++;
			sum = pages[i];
		}
		if(nos>m) return false;
	}

	return true;
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif
	
	int n,m;
	cin>>n>>m;

	int pages[n];
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		int num;
		cin>>num;
		pages[i] = num;
		sum += num;
	}

	int lo = 0;
	int hi = sum;

	int ans;

	while(lo<=hi){
		int mid = (lo+hi)/2;

		if(is_possible(pages,mid,m,n)){
			ans = mid;
			hi = mid-1;
		}else{
			lo = mid+1;
		}
	}

	cout<<ans;
}

