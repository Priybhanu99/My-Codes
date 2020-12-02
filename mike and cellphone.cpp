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

	string s;
	cin>>s;

	map<int,int> m;
	m[0] = 3;
	m[1] = 0;
	m[2] = 0;
	m[3] = 0;
	m[4] = 1;
	m[5] = 1;
	m[6] = 1;
	m[7] = 2;
	m[8] = 2;
	m[9] = 2;

	bool flag = true;

	vector<int> a;
	for(int i=0;i<n;i++){
		
		a.pb(m[s[i]-'0']);
		if(s[i]=='0'){
			flag = false;
		}
	}

	sort(a.begin(), a.end());
	int x = a[0];
	int y = a[a.size()-1];

	// cout<<x<<" "<<y<<"\n";


	int ans = y-x;
	if(!flag){
		ans--;
	}
	
	if(ans>=2){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

	//}

}