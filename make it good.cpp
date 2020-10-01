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

		// int ans = 0;

		// int c = 0;
		// int l = 0,r = n-1;

		// while(l<r){
		// 	if(min(a[l],a[r])<c){
		// 		if(min(a[l],a[r])==a[l]){
		// 			ans = max(ans,l);
		// 			c = a[l];
		// 			l++;
		// 		}else{
		// 			ans = max(ans,r);
		// 			c = a[r];
		// 			r--;
		// 		}
		// 	}else{

		// 		if(min(a[l],a[r])==a[l]){
		// 			c = a[l];
		// 			l++;
		// 		}else{
		// 			c = a[r];
		// 			r--;
		// 		}
		// 	}
		// }

		int x = -1;
		int i = n-1;
		while(i>0 && a[i-1]>=a[i]){
			i--;
		}

		x = i;

		// if(x==-1){
		// 	cout<<"0\n";
		// 	continue;
		// }

		int ans = 0;

		while(x>0 && a[x-1]<=a[x]){
			x--;
		}

		ans = x;
		cout<<ans<<"\n";

		// map<int,vector<int>> m;
		// for (int i = 0; i < n; ++i)
		// {
		// 	m[a[i]].push_back(i);
		// }

		// for(auto i:m){

		// 	// cout<<i.F<<" ";
		// 	int l = (i.S)[0];
		// 	int r = (i.S)[(i.S).size()-1];

		// 	if(l==r){
		// 		continue;
		// 	}

		// 	// cout<<l<<" "<<r<<"i\n";

		// 	int temp = i.F;
		// 	for(int x = l+1;x<=r-1;x++){
		// 		if(a[x]<temp){
		// 			ans = max(ans,r);
		// 			break;
		// 		}
		// 	}
		// }
		// // cout<<"\n\n";
		// cout<<ans<<"\n";


	}

}