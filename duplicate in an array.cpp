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

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//if nos are between 1 to n

	for(int i=0;i<n;i++){
		if(a[abs(a[i])]>=0){
			a[abs(a[i])] = -a[abs(a[i])];
		}else{
			// cout<<abs(a[i])<<" ";
		}
	}


	//if nos are between 0 to n-1
	for(int i=0;i<n;i++){
		if(a[abs(a[i]-1)]>0){
			a[abs(a[i]-1)] = -a[abs(a[i]-1)];
		}else{
			cout<<abs(a[i]-1)<<" ";
		}
	}
	//}

}