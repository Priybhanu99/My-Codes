#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

void solve(string s,int n,int i,string ans){
	if(i==n){
		return;
	}


}

bool check(string s,string ans){

	for(int i=0;i<ans.length();i++){
		bool flag = true;
		for(int j=i;j<ans.length();j++){

			if(!flag){
				continue;
			}
			if(s[i+j]==ans[j]){
				flag = false;
			}
		}
		if(flag){
			return false;
		}
	}

	return true;
}

string xor_s(string a,string b){
	string ans;
	for (int i = 0; i < a.size(); ++i)
	{
		if(a[i]!=b[i]){
			ans += '1';
		}else{
			ans += '0';
		}
	}
	return ans;
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

		int n;
		cin>>n;

		string s;
		cin>>s;

		string ans;
		// string ans1(n,'1');
		// // cout<<ans1<<"ans 1"<<"\n";
		// string ans2(n,'0');
		// string ans3;
		// // solve(s,n,i,ans);

		// for(int i=0;i<n;i++){
		// 	if(i%2){
		// 		ans+='0';
		// 	}else{
		// 		ans+='1';
		// 	}
		// }

		// for (int i = 0; i < n; ++i)
		// {
		// 	if(i%2){
		// 		ans3+='1';
		// 	}else{
		// 		ans3+='0';
		// 	}
		// }

		// // cout<<ans<<" "<<ans1<<" "<<ans2<<" "<<ans3<<"\n";
		// bool b = check(s,ans);
		// if(b){
		// 	cout<<ans<<"\n";
		// 	continue;
		// }else if(check(s,ans1)){
		// 	cout<<ans1<<"\n";
		// 	continue;
		// }else if(check(s,ans2)){
		// 	cout<<ans2<<"\n";
		// 	continue;
		// }else if(check(s,ans3)){
		// 	cout<<ans3<<"\n";
		// 	continue;
		// }else{
		// 	cout<<"-1\n";
		// }

		// for(int i =0;i<n;i++){
		// 	string temp = s.substr(i,n);
		// 	// cout<<"substr -> "<<temp<<" ";
		// 	ans = xor_s(ans,temp);
		// }

		for(int  i=0;i<s.size();i+=2){
			ans += s[i];
		}

		cout<<ans<<"\n";







	}

}