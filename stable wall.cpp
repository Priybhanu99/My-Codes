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
	int tc = 0;
	cin>>t; while(t--){

		tc++;
		int r,c;
		cin>>r>>c;

		char a[r][c];
		map<char,int> map;

		int alpha[26];
		memset(alpha,0,sizeof(alpha));

		for(int i=0;i<r;i++){
			for(int j = 0 ;j<c;j++){
				cin>>a[i][j];
				map[a[i][j]] = 1;
				//alpha[a[i][j]-'A'] ++;
			}
		}

		// for(auto i:map){
		// 	map[i.first] = 0;
		// }

		for (int i = 0; i < c; ++i)
		{
			map[a[r-1][i]] = 26;
			//alpha[a[r-1][i]-'A'] = 26;
		}

		int updated = 0;

		bool flag = true;
		for(int row = r-2;row>=0;row--){
			for(int col = 0;col<c;col++){
				if(a[row][col]!=a[row-1][col]){
					if(map[a[row][col]]<map[a[row-1][col]]){
						updated++;
						map[a[row][col]] --;
					}

					//alpha[a[row-1][col]-'A'] -= 1;
				}
			}
		}

		string ans = "";

		if(updated==2){
			ans = "-1";
		}else{
			vector<pair<char,int>> pairs;
			for(auto i:map){
				pairs.push_back({i.first,i.second});
			}

			sort(pairs.begin(), pairs.end());
			reverse(pairs.begin(), pairs.end());

			for(auto i:pairs){
				ans += i.first;
			}

		}
		// sort(alpha,alpha+26);
		// reverse(alpha,alpha+26);

		// for (int i = 0; i < 26; ++i)
		// {
		// 	if(alpha[i]==0){
		// 		continue;
		// 	}
		// 	cout<<char(i+'A');
		// }
		// cout<<"\n";


		
		cout<<"Case #"<<tc<<": "<<ans<<"\n";

	}
}

