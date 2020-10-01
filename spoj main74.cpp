#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define mod 1000000007

struct mat{
	int m[2][2];

	mat(){
		memset(m,0,sizeof(m));
	}

	void iden(){
		m[0][0] = 1;
		m[1][1] = 1;
	}

	mat operator *(const mat &b)const {
		mat r;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				for(int k=0;k<2;k++){
					r.m[i][j] = (r.m[i][j] + (m[i][k]*b.m[k][j])%mod)%mod;
				}
			}
		}
		return r;
	}
};


mat multiply(mat &t,int n){
	mat ans;
	ans.iden();
	while(n!=0){
		if(n&1){
			ans = ans*t;
		}
		t = t*t;
		n = n>>1;
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

	int t;
	cin>>t;

	while(t--){

		int n;
		cin>>n;

	//we have to print n+2th fibonacci no,,since   is very large we use matrix exponentiation
	//time complexity = 0(k^3*logn)

		mat t;
		t.m[0][0] = 0;
		t.m[0][1] = 1;
		t.m[1][0] = 1;
		t.m[1][1] = 1;

		int f[2] = {1,2};
		if(n<2){
			cout<<f[n]<<endl;
			continue;
		}

		mat ans = multiply(t,n-1);
		int value = ((ans.m[0][0])%mod + (ans.m[0][1]*2)%mod+(ans.m[1][0]*1)%mod+(ans.m[1][1]*2)%mod)%mod;

		cout<<(value+mod)%mod<<endl;



	}


}

