#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e3+5;
int a[N][N];

int find_max3(int i,int j,int x,int k,int p,int n){
	if(p==0){
		return 0;
	}

	int one = 0;
	int two = 0;
	int three = 0;
	if(i<k){
		one = a[0][i] + find_max3(i+1,j,x,k,p-1,n);
	}
	if(j<k){
		two = a[1][j] + find_max3(i,j+1,x,k,p-1,n);
	}
	if(x<k){
		three = a[2][x] + find_max3(i,j,x+1,k,p-1,n);
	}

	return max(max(one,two),three);
}

int find_max2(int i,int j,int k,int p,int n){
	if(p==0){
		return 0;
	}

	int one = 0;
	int two = 0;
	if(i<k){
		one = a[0][i] + find_max2(i+1,j,k,p-1,n);
	}
	if(j<k){
		two = a[1][j] + find_max2(i,j+1,k,p-1,n);
	}

	return max(one,two);
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

		
		cout<<"Case #"<<x<<": ";
		// int ans = find_max(s1,s2,0,0,p,k,0);
		int ans = 0;
		if(n==2){
			ans = find_max2(0,0,k,p,n);
		}else{
			ans = find_max3(0,0,0,k,p,n);
		}	
		cout<<ans<<"\n";
	}
}

