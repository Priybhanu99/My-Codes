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

	int n,m;
	cin>>n>>m;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	P b[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>b[i].F>>b[i].S;

		b[i].F--;
		b[i].S--;
	}

	int ans = INT_MIN;
	vector<int> rv;
	for (int i = 0; i < n; ++i)
	{

		vector<int> temp1;
		int temp[n];
		for(int gg=0;gg<n;gg++){
			temp[gg] = a[gg];
		}
		int index = 0;
		for(auto x:b){
			if(x.F>i || x.S<i){
				//include this segment
				temp1.pb(index+1);
				for(int j = x.F;j<=x.S;j++){
					temp[j]--;
				}
			}
			index++;
		}

		// sort(temp,temp+n);

		int mxm = INT_MIN;
		int mnm = INT_MAX;

		for (int i = 0; i < n; ++i)
		{
			mxm = max(mxm,temp[i]);
			mnm = min(mnm,temp[i]);
		}
		// cout<<(temp[n-1]-temp[0])<<" ";
		if(mxm-mnm>ans){
			ans = mxm - mnm;
			rv = temp1;
		}
		// ans = max(ans,mxm-mnm);

		// for(auto gg:temp){
		// 	cout<<gg<<" ";
		// }
		// cout<<"\n";
	}

	cout<<ans<<"\n";
	cout<<rv.size()<<"\n";
	for(auto i:rv){
		cout<<i<<" ";
	}
	//}

}