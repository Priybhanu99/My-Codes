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

		int n,m,x,y;
		cin>>n>>m>>x>>y;

		char a[n][m];
		for (int i = 0; i < n; ++i)
		{
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}

		int pref1 = min(2*x,y);
		int pref2 = (pref1==2*x) ? 1:2;

		int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			int one = 0;
			int two = 0;
			int j = 0;
			for(;j<m;j++){
				while(j+1<m && a[i][j]=='.'&&a[i][j+1]=='.'){
					two++;
					j+=2;
				}
				if(j<m && a[i][j]=='.'){
					one++;
					j++;
				}
			}
			// cout<<"one :"<<one<<" two: "<<two<<"\n";
			if(pref2==1){
				ans += x*one + x*2*two;
			}else{
				ans += y*two + x*one;
			}
		}


		cout<<ans<<"\n";

	}
}

