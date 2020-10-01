#include <bits/stdc++.h>
using namespace std;

#define int long long int

int f(int n){
	int ans = 0;

	if(n==1){
		return n;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			ans = i;
			break;
		}
	}

	if(ans == 0){
		return n;
	}

	return ans;
}

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
		map<int,vector<int> >map;
		for(int i=1;i<=n;i++){
			int a;
			cin>>a;
			int x = f(i);
			// if(map.count(x)==0){
			// 	map[x].push_back(0);
			// }
			//cout<<x<<",";
			// if(x==1){
			// 	map[1].push_back(a);
			// 	continue;
			// }
			// if(map[x].back()<a){
			if(x==1){
				continue;
			}
			map[x].push_back(a);
			// map[1].push_back(a);
			// }
		}

		// for(auto i:map){
		// 	cout<<i.first<<"->";
		// 	for(auto x:i.second){
		// 		cout<<x<<",";
		// 	}
		// 	cout<<"\n";
		// }

		int mx = 1;
		for(auto i:map){
			int count = 0;
			for(int j=0;j<(i.second).size()-1;j++){
				if(i.second[j]<i.second[j+1]){
					count++;
					if(count>mx){
						mx = count;
					}
				}else{
					count = 0;
				}
			}
		}

		cout<<mx<<"\n";

	}
}

