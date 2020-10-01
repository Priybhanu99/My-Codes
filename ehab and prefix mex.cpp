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

	set<int> set;
	for(int i=0;i<=n;i++){
		set.insert(i);
	}

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		set.erase(a[i]);
	}
	

	int b[n];

	b[0] = *set.begin();
	set.erase(b[0]);

	for(int i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			b[i] = a[i-1];
		}else{
			int val = *set.begin();
			set.erase(val);


			b[i] = val;
		}
	}

	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	

	//}
}

