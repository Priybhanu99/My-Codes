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

	int n,m;
	//cin>>t; while(t--){

	cin>>n>>m;
	int a[n];

	int sum = 0;

	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		sum += x;
		a[i] = x-y;
	}

	sort(a,a+n);
	reverse(a,a+n);

	int count = 0;
	

	for(int i=0;i<n;i++){
		if(sum<=m){
			break;
		}

		sum -= a[i];
		count++;
	}

	//cout<<sum<<",";
	if(sum>m){
		cout<<"-1\n";
	}else{
		cout<<count<<"\n";
	}


	//}
}

