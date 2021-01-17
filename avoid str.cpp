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
	cin>>t; while(t--){

		int n;
		cin>>n;

		string s;
		cin>>s;

		// string temp1 = "",temp2 = "";
		// for (int i = 0; i < n; ++i)
		// {
		// 	if(s[i]=='t' || s[i]=='r' || s[i] == 'y' || str[i]=='u' str[i]=='g'|| str[i]=='b'){

		// 	}
		// }

		sort(s.begin(), s.end());
		cout<<s<<"\n";

	}

}