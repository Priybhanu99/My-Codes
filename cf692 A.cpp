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

		int count = 0;
		for(int i=n-1;i>=0;i--){
			if(s[i]==')'){
				count++;
			}else{
				break;
			}
		}

		if(count>n/2){
			cout<<"Yes\n";
		}else{
			cout<<"No\n";
		}

	}

}