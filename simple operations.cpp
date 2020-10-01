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

		string s,r;
		cin>>s>>r;
		
		int k = 0;

		int a[s.size()+2];
		memset(a,0,sizeof(a));

		for(int i=0;i<s.size();i++){
			if(s[i]!=r[i]){
				a[i]++;
			}else{
				a[i] = 0;
			}
		}

		k = 0;
		int ans = 0;
		//bool iszero = true;
		int prev = a[0];
		for (int i = 0; i < s.size(); ++i)
		{
			if(prev==0&&a[i]==1||i==0 && a[i]==1){
				k++;
			}
			prev = a[i];
			ans += a[i];
		}

		// for (int i = 0; i < s.size(); ++i)
		// {
		// 	cout<<a[i]<<" ";
		// }
		cout<<k*ans<<"\n";

	}
}

