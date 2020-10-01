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
	//cin>>t; while(t--){

	int n,b;
	cin>>n>>b;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	vector<map<int,int>> m(n+1);
	map<int,int> temp;
	m[n] = temp;
	for(int i=n-1;i>=0;i--){
		
		temp.clear();
		temp = m[i+1];
		temp[a[i]]++;
		m[i] = temp;
	}

	int ans = 0;
	for(int i=0;i<n;i++){
		for(auto x:m[i+1]){
			if(x.first!=a[i]){
				ans += x.second;
			}
		}
	}

	cout<<ans<<"\n";
	//}

}
// 1 2 2 3 3 4 4

