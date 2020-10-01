#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve(){
	vector<int> temp;
	int n = 1;
	while(n<10){
		int x = n;
		string s;
		while(x){

			s += ((x&1) + '0');
			x = x>>1;

		}
		reverse(s.begin(), s.end());
		temp.push_back(stoi(s));
		n++;
	}


	for(auto i:temp){
		cout<<i<<"\n";
	}
}

int mod(string s,int n){

	int res = 0;
	for(int i = 0;i<s.size();i++){

		res = res*10 + (s[i]-'0');
		res %= n;
	}

	return res;
}

void func(int n){

	queue<string> q;
	q.push("1");

	set<string> set;
	while(!q.empty()){

		string s = q.front();
		q.pop();

		int mod = mod(s,n);

		if(mod==0){
			return s;
		}else if(set.count(s)==0){
			set.insert(s);

			q.push(s+'0');
			q.push(s+'1');
		}

	}
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	solve();

	//}
}

