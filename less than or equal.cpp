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

	int n,k;
	cin>>n>>k;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);

	if(k==0){
		if(a[0]==1){

			cout<<"-1\n";
		}else{
			cout<<"1\n";
		}
	}else{

		if(a[k-1]!=a[k]){
			cout<<a[k-1]<<"\n";
		}else{
			cout<<"-1\n";
		}
	}
	//}

}