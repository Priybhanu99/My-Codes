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

		int n,k;
		cin>>n>>k;

		int a[n];

		map<int,int> map;
		for(int i=0;i<n;i++){
			cin>>a[i];
			map[a[i]]++;
		}

		int mxm = 0,num = -1;

		
		int ans1 = INT_MAX;
		for(int x = 1;x<=100;x++){
			int ans = 0;
			int i = 0;
			while(i<n){
				if(a[i]!=x){
					i+=k;
					ans++;
				}else{
					i++;
				}
			}

			ans1 = min(ans1,ans);

		}
		cout<<ans1<<"\n";
	}

}