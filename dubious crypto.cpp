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

		int l,r,m;
		cin>>l>>r>>m;

		// n.a + b -c = m

		//n.l + b - l = m
		//n.l + l - c = m

		int lo = m/r;
		int hi = m/l;



		int n = 0;
		for(int i = 1;i<=100;i++){
			// if(i==0){
			// 	continue;
			// }
			int temp = m-(i*l - l);
			if(temp>=l && temp<=r){
				cout<<l<<" "<<temp<<" "<<l<<"\n";
				break;
			}
			int temp2 = m-(i*l + l);
			if(temp2>=l && temp2<=r){
				cout<<l<<" "<<l<<" "<<temp2<<"\n";
				break;
			}
		}
		// cout<<l<<" "<<l<<" "<<l+1<<"\n";

	}

}