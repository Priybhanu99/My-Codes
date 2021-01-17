#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n,x;
	cin>>n>>x;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int count = 0,l=0,r=0;
	int sum = 0;

	while(r<n){

		sum += a[r];
		while(l<r &&sum>x){
			sum -= a[l];
			l++;
		}
		if(sum==x){
			count++;	
			sum -= a[l];
			l++;
		}
		r++;
	}
	if(sum==x){
		count++;
	}
	cout<<count;

	//}

}