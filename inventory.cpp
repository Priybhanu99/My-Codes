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
	// cin>>t; while(t--){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	set<int> set;
	for (int i = 0; i < n; ++i)
	{
		set.insert(i+1);
	}

		// set<int> temp;
	for (int i = 0; i < n; ++i)
	{
		if(set.count(a[i])!=0){
			set.erase(a[i]);
		}

	}


	// for(auto i:set){
	// 	cout<<i<<" ";
	// }


	map<int,int> ans;
	for (int i = 0; i < n; ++i)
	{
		ans[a[i]]++;
		if((ans.count(a[i])!=0 && ans[a[i]]>1 )|| (a[i]>n)){
			ans[a[i]]--;
			cout<<*(set.begin())<<" ";
			set.erase(*(set.begin()));
		}else{
			cout<<a[i]<<" ";
		}
	}

	cout<<"\n";
	// }

}