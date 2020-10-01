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

		string s;
		cin>>s;

		int k,x;
		cin>>k>>x;
		
		if(k==0){
			map<int,int> maps;
			int c = 0;
			for (int i = 0; i < s.size(); ++i)
			{
				if(maps.count(s[i])<x){
					maps[s[i]] ++;
					c++;
				}else{
					break;
				}
			}
			cout<<c<<"\n";
		}else{

			int i = 0;
			int ans = 0;

			map<int,int> m;
			for(;i<s.size();i++){
				int count = m.count(s[i]);
				if(count==0){
					m[s[i]] = 1;
					ans++;
				}else{
					if(count<x){
						m[s[i]] ++;
						ans++;
					}else{
						if(k>=1){
							k-=1;
						}else{
						//i--;
							break;
						}
					}
				}
			}
			cout<<ans<<"\n";
		}

		

	}
}

