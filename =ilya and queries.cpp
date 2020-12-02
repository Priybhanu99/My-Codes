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

	string s;
	cin>>s;

	int n;
	cin>>n;

	vector<int> prefix(s.size()+1);
	for(int i=0;i<s.size()-1;i++){
		prefix[i+1] = prefix[i] + ((s[i]==s[i+1])? 1:0);
	}

	// for(auto i:prefix){

	// 	cout<<i<<" ";
	// }


	// cout<<"\n";
	while(n--){
		int a,b;
		cin>>a>>b;

		cout<<prefix[b-1]-prefix[a-1]<<"\n";

	}

	//}

}