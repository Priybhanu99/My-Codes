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

	unordered_map<int,int> m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}

	sort(a,a+n);

	int temp1 = a[0];
	int temp2 = a[n-1];

	if(temp1==temp2){
		cout<<"0"<<" "<<(n*(n-1))/2<<"\n";
	}else{
		cout<<abs(temp1-temp2)<<" "<<m[temp1]*m[temp2]<<"\n";
	}


	//}

}