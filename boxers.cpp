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


	sort(a,a+n);
	set<int> set;

	for(int i=0;i<n;i++){

		if(set.count(a[i]-1)==0 && a[i]-1!=0){
			set.insert(a[i]-1);
			continue;
		}
		if(set.count(a[i])==0){
			set.insert(a[i]);
		}else if(set.count(a[i]+1)==0){
			set.insert(a[i]+1);
		}

	}

	cout<<set.size();

	//}
}

