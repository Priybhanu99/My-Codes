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
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	vector<pair<int,int>> ans;
	int count = 0;
	while(!is_sorted(a,a+n)&&count<1000000){
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1]){
				ans.push_back({i+1,i+2});
				swap(a[i],a[i+1]);
			}
		}
		count++;
	}
	if(count==1000000){
		cout<<"-1\n";
		return 0;
	}
	cout<<ans.size()<<"\n";

	for(auto i:ans){
		cout<<i.first<<" "<<i.second<<"\n";
	}

	//}
}

// 3 4 2 5 1
// 3 2 4 
