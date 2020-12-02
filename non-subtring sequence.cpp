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

		int n,q;
		cin>>n>>q;

		string s;
		cin>>s;

		// map<char,vector<int>

		while(q--){
			int l,r;
			cin>>l>>r;


			int count = 0;
			int index = 0;

			int last = -1;

			bool flag = 0;

			// vector<int> ans;
			for(int i=l-1;i<r;i++){
				char ch = s[i];

				//find it's leftmost position
				flag = 0;
				for(int j=last+1;j<n;j++){
					if(s[j]==ch){
						if(j==i){
							if(count>=(r-l)){
								continue;
							}else{
								count++;
							}
						}else{

						}

						last = j;
						// ans.pb(last);
						index++;

						flag = 1;
						break;
					}
				}

				if(flag ==0){
					break;
				}
			}

			// for(auto i:ans){
			// 	cout<<i<<" ";
			// }

			if(flag==0){
				cout<<"NO\n";
			}else{
				cout<<"YES\n";
			}


		}

	}

}