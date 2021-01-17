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

		int n,m;
		cin>>n>>m;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int index = 0;
		for(int i=n-1;i>=0;i--){
			if(a[i]!=(i+1)){
				index = i+1;
				break;
			}
		}

		vector<P> temp;
		double ans = 1.0;

		for (int i = 0; i < m; ++i)
		{
			double x,y;
			cin>>x>>y;

			if(x>=(index)){
				ans *= (1-y);
			}
		}

		if(index==0){
			cout<<"1.000000\n";
		}else{
			cout<<fixed<<setprecision(6)<<(1-ans)<<"\n";
		}
	}

}