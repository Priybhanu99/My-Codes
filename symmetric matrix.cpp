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

		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			int a,b,c,d;
			cin>>a>>b>>c>>d;

			if(b==c){
				count++;
			}

		}

		if(m%2){
			cout<<"NO\n";
			continue;
		}

		if(count){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}

}