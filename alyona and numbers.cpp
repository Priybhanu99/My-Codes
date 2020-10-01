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

	int x,y;
	cin>>x>>y;
	
	int cnt[5] = {};
	int cnt1[5] = {};

	for(int i=1;i<=x;i++){
		cnt[i%5]++;
	}

	for(int i=1;i<=y;i++){
		cnt1[i%5]++;
	}

	int ans = 0;

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if((i+j)%5==0){
				ans += 0LL + (cnt[i]*cnt1[j]);
			}
		}
	}

	cout<<ans<<"\n";

}




