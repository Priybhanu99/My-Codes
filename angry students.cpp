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

		int n;
		cin>>n;

		string s;
		cin>>s;

		int start = -1;
		for (int i = 0; i < n; ++i)
		{
			if(s[i]=='A'){
				start = i;
				break;
			}
		}

		if(start==-1){
			cout<<"0\n";
			continue;
		}
		
		int ans = INT_MIN;
		int count = 0;
		for(int i=start+1;i<n;i++){
			if(s[i]=='P'){
				count++;
			}else{
				ans = max(ans,count);
				count = 0;
			}
		}

		ans = max(ans,count);

		cout<<ans<<"\n";


	}

}