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

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int sum = 0;
		vector<int> index;

		for (int i = 0; i < n; ++i)
		{
			sum += a[i];
			if(sum<0){
				index.pb(i);
				sum = 0;
			}
		}

		int ans = 0;

		int start = 0;

		for(int i=0;i<index.size();i++){
			int temp = 0;
			for(int j=start;j<=index[i];j++){
				temp += a[j];
			}

			start = index[i]+1;

			ans += abs(temp);
		}

		cout<<ans<<"\n";
	}

}
//-5 2 -4 -8 9 -4 0
