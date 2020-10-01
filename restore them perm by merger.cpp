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

		int a[2*n];
		for(int i=0;i<2*n;i++){
			cin>>a[i];

		}

		vector<int> ans;
		set<int> s;

		// cout<<a[0];

		for (int i = 0; i < 2*n; ++i)
		{
			// cout<<a[i]<<" ";
			if(s.count(a[i])==0){
				// cout<<i<<" ";
				s.insert(a[i]);
				ans.push_back(a[i]);
			}
		}

		for(auto i:ans){
			cout<<i<<" ";
		}

		cout<<"\n";




	}
}

// 1 2 
// 1 3 4 2 
// 1 2 3 4 5 
// 1 2 3 
// 2 3 4 1 
