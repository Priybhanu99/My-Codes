#include <bits/stdc++.h>
using namespace std;

#define int long long int

int getint(int a,string b){

	int ans = 0;
	for (int i = 0; i < b.size(); ++i){
		ans = (ans*10 + (b[i]-'0'))%a;
	}
	return ans;
}

int getgcd(int a,string b){

	int i = getint(a,b);
	int ans = __gcd(a,i);

	return ans;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	cin>>n;
	string m;
	cin>>m;

	int ans = getgcd(n,m);
	cout<<ans;
}