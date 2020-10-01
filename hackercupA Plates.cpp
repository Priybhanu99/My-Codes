#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e3+5;
int a[N][N];


int find_max(int *index,int k,int p,int n){
	if(p==0){
		return 0;
	}

	int ans = INT_MIN;
	for(int i = 0;i<n;i++){
		if(index[i]<k){
			int j = index[i];
			index[i] += 1;
			ans = max(ans,find_max(index,k,p-1,n)+a[i][j]);
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

	int t,n,k,p;
	int x = 0;
	cin>>t; while(t--){

		x++;
		cin>>n>>k>>p;
		
		//int a[n][k];
		for(int i=0;i<n;i++){
			for(int j=0;j<k;j++){
				cin>>a[i][j];
			}
		}

		int index[n];//array which is used to know the current index of the arrays
		memset(index,0,sizeof(index));
		cout<<"Case #"<<x<<": ";
		// int ans = find_max(s1,s2,0,0,p,k,0);
		int ans = find_max(index,k,p,n);
		cout<<ans<<"\n";
	}
}

