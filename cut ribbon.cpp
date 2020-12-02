#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int solve(int n,int a,int b,int c){
	if(n<=0){
		return 0;
	}

	int ans = 0;
	
	
	ans = max(ans,2+solve(a,a,b,c) + solve(n-a,a,b,c)); 
	
	ans = max(ans,2+solve(b,a,b,c) + solve(n-b,a,b,c));
	
	ans = max(ans,2+solve(c,a,b,c) + solve(n-c,a,b,c));
	

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
	//cin>>t; while(t--){

	int n,a,b,c;
	cin>>n>>a>>b>>c;

	int ans = solve(n,a,b,c);
	cout<<((ans==0)?1:ans)<<"\n";
	//}

}