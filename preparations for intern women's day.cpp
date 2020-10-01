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

	// int t;
	// cin>>t; while(t--){

	int n,k;
	cin>>n>>k;
	map<int,int> map;

	for(int i=0;i<n;i++){
		int num;
		cin>>num;

		map[num%k]++;
	}

	int ans = 0;

	// ans += (map[0]/2);
	// map[0] = map[0]%2;

	for(auto i:map){
		//cout<<i.first<<" "<<i.second<<"\n";
		if(i.first==0){
			continue;
		}
		int x = k-i.first;
		if(map.count(x)!=0){
			int y = min(i.second,map[x]);
			map[x] -= y;
			map[i.first] -= y;
			ans += y;
		}
	}



	for(auto i:map){
		if(i.second!=0){
			if((i.first*2)% k==0){
				ans += i.second/2;
			}
		}
	}

	cout<<ans*2;


	//}
}

