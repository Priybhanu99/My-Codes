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

		int sp = 0;

		vector<int> r;
		r.push_back(0);

		for (int i = 1; i <= s.size(); ++i)
		{
			if(s[i-1]=='R'){
				r.push_back(i);				
			}
		}

		r.push_back(s.size()+1);

		int mxm = 0;

		for(int i=0;i<r.size()-1;i++){

			if(r[i+1]-r[i]>mxm){
				mxm = r[i+1]-r[i];
			}
		}

		cout<<mxm<<"\n";

	}
}

// 3
// 2
// 3
// 1
// 7
// 1
