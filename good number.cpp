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

	int t,k;
	cin>>t>>k;

	int count = 0;
	while(t--){

		string s;
		cin>>s;

		map<int,int> m;
		for (int i = 0; i < s.size(); ++i)
		{
			m[s[i]-'0']++;
		}


		bool flag = true;

		for(int i=0;i<=k;i++){
			if(m.count(i)==0){
				flag = false;
			}
		}

		if(flag){
			count++;
		}


	}

	cout<<count<<"\n";

}