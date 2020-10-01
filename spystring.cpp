#include <bits/stdc++.h>
using namespace std;

#define int long long int

string solve(vector<string> a,int n,int m){

	string ans = a[0];

	for(int i=0;i<m;i++){
		char ch = ans[i];
		//ans[i] = '#';

		int y = 0;
		bool flag = true;
		for(int j=1;j<n;j++){
			int count = 0;
			for(int x=0;x<m;x++){
				if(a[j][x]!=ans[x]){
					count++;
				}
			}
			if(count>=2){
				flag = false;
			}
		}

		if(flag==true){
			ans[i] = '#';
			return ans;
		}

		ans[i] = ch;
	}

	return "NoAns";
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n,m;
		cin>>n>>m;

		vector<string> a(n);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		string ans = solve(a,n,m);
		if(ans=="NoAns"){
			cout<<"-1\n";
		}else{
			cout<<ans<<"\n";
		}



	}
}

