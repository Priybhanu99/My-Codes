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

		int n,p,k;
		cin>>n>>p>>k;

		string s;
		cin>>s;

		int x,y;
		cin>>x>>y;

		int cnt[n+1] = {};
		for(int i=n-1;i>=0;i--){
			if(i+k<n){

				cnt[i] += cnt[i+k] + (1-(s[i]-'0'));
			}else{
				cnt[i] = (1-(s[i]-'0'));
			}
		}

		int ans = INT_MAX;
		for(int i=p-1;i<n;i++){
			ans = min(ans, cnt[i]*x + (i-p+1)*y);
		}

		cout<<ans<<"\n";
	}

}