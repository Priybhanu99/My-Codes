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

		string s;
		cin>>s;

		map<char,int> map;

		int i = 0;
		int j = s.size()-1;

		if(s.size()==1){
			cout<<"0\n";
			continue;
		}

		int ans = INT_MAX;
		for (int i = 0; i < s.size(); ++i)
		{
			map[s[i]]++;
		}

		//cout<<map['a']<<",";

		while(i<=j){

			char lv = s[i];
			char rv = s[j];

			if(map['1']>0 && map['2']>0 && map['3']>0){
				ans = min(ans,j-i+1);
			}

			if(map[lv]==0 || map[rv]==0){
				break;
			}

			if(map[lv]>=map[rv]){
				i++;
				map[lv]--;
			}else{
				j--;
				map[rv]--;
			}
		}

		if(ans==INT_MAX){
			cout<<"0\n";
			continue;
		}
		cout<<ans<<"\n";


	}
}

// 3
// 3
// 4
// 4
// 0
// 0
// 4
