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

		string s;
		cin>>s;

		int a = 0,b=0;

		int ans = 0;

		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i]=='A'){
				a++;
			}else{b++;}

			if(s[i]=='B'){
				if(a>0){
					a--;
					b--;
					ans += 2;
				}else{
					if(b>1){
						b-=2;
						ans += 2;
					}
				}
			}
		}


		cout<<s.size()-ans<<"\n";


	}

}