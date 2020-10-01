#include <bits/stdc++.h>
using namespace std;

#define int long long int

int factorial(int n){
	if(n<=1){
		return 1;
	}

	return n*factorial(n-1);
}

int findrank(string s){

	int n = s.size();
	int fact = factorial(n-1);

	int ans = 1;

	for(int i=0;i<n;i++){

		int countsmaller = 0;
		map<char,int> map;

		for(int x = i+1;x<n;x++){
			if((int)s[i]>(int)s[x]){
				map[s[x]]++;
				countsmaller++;
			}
		}
		map[s[i]]++;

		int div = 1;
		for(auto x:map){
			div *= factorial(x.second);
		}

		ans += (countsmaller * fact)/div;
		fact /= (n-i);
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

	string s;
	cin>>s;

	int ans = findrank(s);
	cout<<ans;
}

