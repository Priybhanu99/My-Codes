#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n,s;
		cin>>n>>s;
		int p[n];
		for(int i=0;i<n;i++){
			cin>>p[i];
		}

		int def[n];
		for(int i=0;i<n;i++){
			cin>>def[i];
		}

		pair<int,int> players[n];
		for (int i = 0; i < n; ++i)
		{
			players[i].first = p[i];
			players[i].second = def[i];
		}

		sort(players,players+n);

		int a=INT_MAX;
		int b = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			if(players[i].second==0){
				a=players[i].first;
				break;
			}
		}
		
		for (int i = 0; i < n; ++i)
		{
			if(players[i].second==1){
				b=players[i].first;
				break;
			}
		}

		//cout<<a<<" "<<b;
		if(s+a+b<=100){
			cout<<"yes\n";
		}else{
			cout<<"no\n";
		}
	}
}

