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

	int n;
	cin>>n;

	int a[n];

	vector<int> indexes;
	for(int i=0;i<n;i++){
		cin>>a[i];

		if(a[i]){
			indexes.pb(i);
		}
	}

	if(indexes.size()==0){
		cout<<"0";
		return 0;
	}
	vector<int> b;
	for (int i = 1; i < indexes.size(); ++i)
	{
		b.pb(indexes[i]-indexes[i-1]);
	}

	int ans = 1;
	for(auto i:b){
		ans *= i;
	}

	cout<<ans<<"\n";
	//}

}