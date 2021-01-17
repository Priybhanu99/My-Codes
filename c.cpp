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

		int n,k;
		cin>>n>>k;

		vector<int> p;
		int a[n];
		for (int i = 0; i < k; ++i)
		{
			a[i] = i+1;
		}
		for(int i=k;i<n;i++){
			a[i] = a[i-1] - 1;
		}

		for(int i=0;i<2*k-n-1;i++){
			p.push_back(a[i]);
		}

		for(int i=k-1;i<n;i++){
			p.push_back(a[i]); 
		}

		// int i = 0;
		// while(p.size()<k){
		// 	vector<int> temp;
		// 	temp.pb(a[i]);
		// 	for(auto )
		// }

		for(auto i:p){
			cout<<i<<" ";
		}

		cout<<"\n";
	}

}