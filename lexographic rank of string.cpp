#include <bits/stdc++.h>
using namespace std;

#define int long long int

int factorial(int n){
	if(n==1){
		return 1;
	}

	return n*factorial(n-1);
}

int findsmaller(string s,int i){

	int count = 0;
	for(int x=i+1;x<s.size();x++){
		if(s[i]>s[x]){
			count++;
		}
	}


	return count;
}

int findrank(string s){

	int n = s.size();
	int fact = factorial(n);

	int ans = 1;
	for (int i = 0; i < n; ++i)
	{
		fact /= (n-i);
		int count = findsmaller(s,i);
		ans += count*fact;


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

