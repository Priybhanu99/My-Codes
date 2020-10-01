#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

bool cmp(P a,P b){
	if(a.F!=b.F){
		return a.F>b.F;
	}

	return a.S<=b.S;
}

int32_t main(){ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n,k;
	cin>>n>>k;

	map<P,int> m;
	vector<pair<int,int>> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].F;
		cin>>a[i].S;
		m[{a[i].F,a[i].S}]++;
	}

	sort(a.begin(), a.end(),cmp);

	P item = a[k-1];
	cout<<item.F<<" ";
	
	cout<<m[item];


	
		//}

}