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

	int n,k;
	cin>>n>>k;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);
	
	int ans = 0;
	int count = 0;

	map<int,int> m;

	// int l=0,r=0;
	for(int i=0;i<n;i++){
		if(m.count(a[i]/k)!=0 && a[m[a[i]/k]]*k == a[i]){
			
		}else{
			m[a[i]] = i;
		}
		
	}


	// for(auto i:m){
	// 	cout<<i.F<<" ";
	// }
	// cout<<"\n";

	cout<<m.size()<<"\n";

	//}

}