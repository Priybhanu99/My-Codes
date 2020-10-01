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

	int t;
	cin>>t; while(t--){

		string s;
		cin>>s;

		int z=0,o=0;
		for (int i = 0; i < s.size(); ++i)
		{
			if(s[i]=='0'){
				z++;
			}else{
				o++;
			}
		}

		int count = min(z,o);
		if(count%2==1){
			cout<<"DA\n";
		}else{
			cout<<"NET\n";
		}


	}
}

