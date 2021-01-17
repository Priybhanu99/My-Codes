#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

const int N = 1005;
int a[N][N];


int solve(int n,int m,int val,int d){
	int count = 0,flag = 0;
	for(int row = 0;row<n;row++){
		if(flag){
			break;
		}
		for(int col=0;col<m;col++){
			int rem = abs(val-a[row][col]);
			if(rem%d){
				flag = 1;
				break;
			}else{
				count += rem/d;
			}
		}
	}

	if(!flag){
		return count;
	}else{
		return INT_MAX;
	}

}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n,m,d;
	cin>>n>>m>>d;

	vector<int> x;
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			x.pb(a[i][j]);
		}
	}

	sort(x.begin(), x.end());

	int num = x[(x.size())/2];

	int ans = solve(n,m,num,d);	

	if(ans==INT_MAX){
		cout<<"-1\n";
	}else{
		cout<<ans;
	}
}