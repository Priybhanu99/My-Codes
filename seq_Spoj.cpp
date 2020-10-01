#include <bits/stdc++.h>
using namespace std;
#define mod 1000000000;
#define int long long int
int k;
vector<int> b;
vector<int> c;


vector<vector<int> > make_t(int k){

	vector<vector<int> > T(k+1,vector<int>(k+1));

	for (int i = 1; i <= k; ++i)
	{
		for (int j = 1; j <=k ; ++j)
		{
			//for last row
			if(i==k){
				for(int x=1;x<=k;x++){
					T[i][x] = c[k-x];
				}
				break;
			}
			if(i==j+1){
				T[i][j] = 1;
			}else{
				T[i][j] = 0;
			}
		}
	}

	return T;

}

vector<vector<int>> identitymat(){

	vector<vector<int>> ans(k+1,vector<int>(k+1));

	for (int i = 1; i <= k; ++i)
	{
		ans[i][i] = 1;
	}

	return ans;

}

vector<vector<int>> mult(vector<vector<int>> a,vector<vector<int>> b){

	vector<vector<int>> ans(k+1,vector<int>(k+1));
	for (int i = 1; i <= k; ++i)
	{
		for(int j=1;j<=k;j++){
			for(int x = 1;x<=k;x++){
				ans[i][j] = (a[i][x]*b[x][j])%mod;
			}
		}
	}

	return ans;

}

int compute(vector<vector<int>> T,int n){

	vector<vector<int> > ans = identitymat();
	while(n>0){
		if(n&1){
			ans =mult(ans,T);
		}
		T = mult(T,T);
		n = n>>1;
	}

	vector<int> F1;
	for(int i=0;i<k;i++){
		F1.push_back(b[i]);
	}

	//T^n-1*F1
	int sum =0;
	for(int i=1;i<=k;i++){
		sum += T[1][i] * F1[i];
	}

	return sum;

}


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int num,n;
		cin>>k;
		//int b[k],c[k];
		for(int i=0;i<n;i++){
			cin>>num;
			b.push_back(num);
		}
		for(int i=0;i<n;i++){
			cin>>num;
			c.push_back(num);
		}

		cin>>n;

		//make matrix T
		vector<vector<int>> T = make_t(k);

		//compute T^n-1
		int ans = compute(T,n-1);

		cout<<ans<<endl;

		b.clear();
		c.clear();

	}
}
