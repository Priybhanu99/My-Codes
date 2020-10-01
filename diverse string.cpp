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

	int t,n;
	cin>>t; while(t--){

		string s;
		cin>>s;

		vector<int> a;
		for(int i=0;i<s.size();i++){
			a.push_back((int)s[i]);
		}

		sort(a.begin(), a.end());

		bool flag = true;
		for (int i = 0; i < s.size()-1; ++i)
		{
			if(a[i]==a[i+1]){
				flag = false;
				break;
			}
			if(a[i+1]-a[i]!=1){
				flag = false;
				break;
			}
		}

		if(flag==true){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}

	}
}

