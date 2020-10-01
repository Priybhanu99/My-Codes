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

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		map<int,int> map;
		for(int i=0;i<n;i++){
			int num;
			cin>>num;

			map[num] ++;
		}
		
		if(n==1){
			cout<<"0\n";
			continue;
		}
		
		int distinct = map.size();

		int nond = INT_MIN;

		for(auto i:map){
			nond = max(nond,i.second);
		}
		
		//cout<<distinct<<" "<<nond<<" ";

		if(nond==0){
			nond++;
		}

		int ans = min(distinct,nond);

		if(distinct == nond){
			ans--;
		}
		

		//bool flag = true;
		// if(ans == distinct && (nond - distinct)>=1){
		// 	ans++;
		// }

		cout<<ans<<"\n";
	}
}

