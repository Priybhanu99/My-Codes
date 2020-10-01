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

		int n,m;
		cin>>n>>m;
		
		string s;
		cin>>s;

		int p[m];
		for(int i=0;i<m;i++){
			cin>>p[i];
		}

		int a[n][26];
		memset(a,0,sizeof(a));

		for(int i=0;i<n;i++){


			if(i==0){

				a[i][s[i]-'a'] = 1;
				continue;

			}

			a[i][s[i]-'a']++;

			for(int x=0;x<26;x++){
				a[i][x] += a[i-1][x];
			}
		}

		int ans[26];
		memset(ans,0,sizeof(ans));

		for(int i=0;i<m;i++){
			for(int x=0;x<26;x++){
				ans[x] += a[p[i]-1][x];
			}
			// for(int i=0;i<26;i++){
			// 	cout<<ans[i]<<" ";
			// }
			// cout<<"\n";
		}

		for(int i=0;i<n;i++){
			ans[s[i]-'a']++;
		}

		for(int i=0;i<26;i++){
			cout<<ans[i]<<" ";
		}

		cout<<"\n";



	}
}

// 4 2 2 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
// 0 0 9 4 5 3 0 0 0 0 0 0 0 0 9 0 0 3 1 0 0 0 0 0 0 0 
// 2 1 1 2 9 2 2 2 5 2 2 2 1 1 5 4 11 8 2 7 5 1 10 1 5 2 
