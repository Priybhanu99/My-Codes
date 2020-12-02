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

		map<char,int> m;

		for (int i = 0; i < s.size(); ++i)
		{
			m[s[i]]++;
		}

	
		int count = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i]=='-' || s[(s.size() + i-1)%s.size()]=='-'){
				count++;
			}
		}

		if(m['<']==0 || m['>']==0){
			cout<<s.size()<<"\n";
		}else{
			cout<<count<<"\n";
		}
	}

}