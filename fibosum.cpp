#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 1e9 + 7;
const int sz = 2;
struct Mat
{
	ll m[sz][sz];

	Mat()
	{
		memset(m, 0, sizeof m);
	}

	void eye()
	{
		for (ll i = 0; i < sz; i++)
			m[i][i] = 1;
	}

	Mat operator* (const Mat &a) const
	{
		Mat r;
		for (ll i = 0; i < sz; i++)
			for (ll j = 0; j < sz; j++)
				for (ll k = 0; k < sz; k++)
					r.m[i][j] = (r.m[i][j]%mod + m[i][k]%mod * a.m[k][j]%mod) % mod;
		return r;
	}
};

int solve(ll n){

    vector<ll> F;
    F.push_back(1ll);
    F.push_back(1ll);

    if(n<=2){
        return F[n-1];
    }

    n = n-1;
	Mat t ,ans;

	t.m[0][0] = 0;
	t.m[1][0]=1,t.m[1][1]=1,t.m[0][1]=1;

	ans.eye();
	while(n){
		if(n&1){
			ans = (ans*t); 
		}
		t =(t*t);
		n = n>>1;
	}

    return (ans.m[0][0]%mod +ans.m[0][1]%mod)%mod;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	
	//for fibonnaci sequence
	// T^k * f(n) = f(n+1)

	ll int t;
	cin>>t;
	while(t--){
		ll int m,n;
		cin>>m>>n;

		int ans = solve(n+2)%mod+solve(m+1)%mod;
		cout<<ans%mod<<endl;
	}

	return 0;



}
