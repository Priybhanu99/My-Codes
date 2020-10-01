#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

const int MAX = 500;

int multiply(int *ans,int n,int ans_size){

	int carry = 0;
	for(int i=0;i<ans_size;i++){

		int prod = ans[i]*n + carry;
		ans[i] = prod%10;
		carry = prod/10;

	}


	while(carry){
		ans[ans_size++] = carry%10;
		carry /= 10;
	}

	return ans_size;
}

string factorial(int n){

	int ans[MAX];
	memset(ans,0,sizeof(ans));

	int ans_size = 1;

	ans[0] = 1;

	for(int i=2;i<=n;i++){
		ans_size = multiply(ans,i,ans_size);
	}

	string a;
	for(int i=ans_size-1;i>=0;i--){
		a += to_string(ans[i]);
	}

	return a;
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

	string ans = factorial(n);
	cout<<ans;

}