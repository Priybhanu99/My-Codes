#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool isPalindrome(string s){
	if(s.size()<=1){
		return true;
	}

	for(int i=0;i<=s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			return false;
		}
	}

	return true;
}

int solve(string s){

	if(s.size()<=1){
		return 0;
	}

	if(isPalindrome(s)){
		return 0;
	}

	int ans = INT_MAX;
	for(int i=1;i<s.size();i++){
		// if(isPalindrome(s.substr(0,i)) && isPalindrome(s.substr(i))){
		// 	ans = 0;
		// }else{
		ans = min(ans,solve(s.substr(0,i)) + 1 + solve(s.substr(i)));
		// }
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

	int t,n;
	cin>>t; while(t--){

		string s;
		cin>>s;

		cout<<solve(s)<<"\n";

	}
}

