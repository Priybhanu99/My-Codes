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
		int a[n];

		map<int,vector<int> > map;
		for(int i=0;i<n;i++){
			cin>>a[i];
			map[a[i]].push_back(i);
		}

		bool flag = false;
		for(auto i:map){
			if(i.second.size()==1){
				continue;
			}

			int x = i.second[0];
			int y = i.second[i.second.size()-1];

			if(x+1!=y){
				flag = true;
				break;
			}

		}

		if(flag == true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
}

