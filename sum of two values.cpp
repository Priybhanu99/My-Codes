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

	int n,target;
	cin>>n>>target;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	map<int,int> m;

	bool flag = false;
	for (int i = 0; i < n; ++i)
	{
		if(m.count(target-a[i])!=0){
			cout<<m[target-a[i]]<<" "<<(i+1)<<"\n";
			flag = true;
			break;
		}
		m[a[i]] = i+1;
	}

	if(!flag){
		cout<<"IMPOSSIBLE\n";
	}
	//}

}