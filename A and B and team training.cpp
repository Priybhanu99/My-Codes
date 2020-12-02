#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int solve(int n,int m){
	if(n<=0 || m<=0){
		return 0;
	}

	if(n<m && n>0 && m>1){
		return 1+solve(n-1,m-2);
	}else if(n>=m && m>0 && n>1){
		return 1+solve(n-2,m-1);
	}
	return 0;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,m;
	cin>>n>>m;


	cout<<solve(n,m);

}