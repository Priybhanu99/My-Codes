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
	cin>>t; while(t--){

		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		vector<P> ans;
		for(int i=1;i<n;i++){
			if(a[0]!=a[i]){
				ans.pb(make_pair(1,i+1));
			}
		}

		int temp = 1;
		for(int i=1;i<n;i++){
			if(a[i]!=a[0]){
				temp = i+1;
				// break;
			}
		}

		for(int i=1;i<n;i++){
			if(a[0]==a[i]){
				ans.pb(make_pair(temp,i+1));
			}
		}


		if(temp==1){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
			for(auto i:ans){
				cout<<i.F<<" "<<i.S<<"\n";
			}
		}

	}

}