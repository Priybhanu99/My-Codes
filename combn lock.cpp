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
	//  #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	//  #endif

	int t,tc = 0;
	cin>>t; while(t--){

		tc++;
		int w,n;

		cin>>w>>n;

		int a[w];
		for (int i = 0; i < w; ++i)
		{
			cin>>a[i];
		}
		int ans = INT_MAX;
		for(int i=1;i<=n;i++){
			int temp = 0;
			for(int x = 0;x<w;x++){
				temp += min(abs(i-a[x]),min(n-i + a[x],n-a[x]+i));
			}
			ans = min(ans,temp);
		}

		cout<<"Case #"<<tc<<": "<<ans<<"\n";

	}

}