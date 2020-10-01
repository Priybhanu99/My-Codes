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

		set<int> s;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}

		bool flag = 0;

		int b[m];
		int ans = -1;
		for (int i = 0; i < m; ++i)
		{
			cin>>b[i];
			// if(s.count(b[i])!=0){
			// 	ans = b[i];
			// 	flag = 1;
			// 	break;
			// }
		}

		for (int i = 0; i < m; ++i)
		{
			// cin>>b[i];
			if(s.count(b[i])!=0){
				ans = b[i];
				flag = 1;
				break;
			}
		}

		if(flag){
			cout<<"YES\n";
			cout<<"1 "<<ans<<"\n";
		}else{
			cout<<"NO\n";
		}

	}

}

// YES
// 1 4
// YES
// 1 3
// NO
// YES
// 1 3
// YES
// 1 2
