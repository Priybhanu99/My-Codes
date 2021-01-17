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

		int n,x,y;
		cin>>n>>x>>y;

		int d = 0;
		for (int i = 1; i < 100; ++i)
		{
			int temp = (y-x)/i;
			if((y-x)%i==0 && temp<n){
				d = i;
				break;
			}
		}


		int count = 0;
		vector<int> ans;

		for(int i=x;i<=y;i+=d){
			ans.pb(i);
			count++;
		}

		while(count<n){

			int temp = x - d;
			if(temp<=0){
				break;
			}

			ans.pb(temp);
			x-=d;
			count++;
		}

		while(count<n){
			ans.pb(y+d);
			count++;
			y += d;
		}

		for (int i = 0; i < n; ++i)
		{
			cout<<ans[i]<<" ";
		}

		cout<<"\n";
	}

}