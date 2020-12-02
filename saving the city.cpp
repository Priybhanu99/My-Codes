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

		int a,b;
		cin>>a>>b;

		string s;
		cin>>s;

		vector<int> gap_between_ones;

		bool flag = false;
		int index = -1;
		for(int i=s.size()-1;i>=0;i--){
			if(s[i]=='1'){
				index = i;
				flag = true;
				break;
			}
		}

		int n = index;

		int i = 0;

		while(i<n){

			while(i<n && s[i]=='0'){
				i++;
			}

			int count = 0;
			while(i<n && s[i]=='1'){
				i++;
			}

			
			while(i<n && s[i]=='0'){
				i++;
				count++;
			}

			gap_between_ones.pb(count);
		}

		if(gap_between_ones.size()!=0 && gap_between_ones[gap_between_ones.size()-1]==0){
			gap_between_ones.pop_back();
		}


		// for(auto i:gap_between_ones){
		// 	cout<<i<<" ";
		// }

		int ans = 0;

		if(flag){
			ans += a;
		}
		i = 0;

		while(i<gap_between_ones.size()){

			int no_of_b = 0;

			// while(i<gap_between_ones.size() && (a*(i+2))> (a + no_of_b)){
			// 	no_of_b += gap_between_ones[i];
			// 	i++;
			// }


			ans += min(a,b*gap_between_ones[i]);
			i++;
		}

		cout<<ans<<"\n";
	}

}