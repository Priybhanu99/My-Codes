#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int sz = 2;

struct Mat
{
	int m[sz][sz];

	Mat()
	{
		memset(m, 0, sizeof m);
	}

	void eye()
	{
		for (int i = 0; i < sz; i++)
			m[i][i] = 1;
	}

	Mat operator* (const Mat &a) const
	{
		Mat r;
		for (int i = 0; i < sz; i++)
			for (int j = 0; j < sz; j++)
				for (int k = 0; k < sz; k++)
					r.m[i][j] = (r.m[i][j] + m[i][k] * 1ll * a.m[k][j]) % mod;
		return r;
	}
};

void solve(int n){

    vector<int> F;
    F.push_back(1);
    F.push_back(1);

    if(n<=2){
        cout<<F[n-1];
        return;
    }

    n = n-1;
	Mat t ,ans;

	t.m[0][0] = 0;
	t.m[1][0]=1,t.m[1][1]=1,t.m[0][1]=1;

	ans.eye();
	while(n){
		if(n&1){
			ans = ans*t; 
		}
		t =t*t;
		n = n>>1;
	}

	cout<<"T matrix"<<endl;
	for (int i = 0; i < sz; ++i)
	{
		for (int j = 0; j < sz; ++j)
		{
			cout<<ans.m[i][j]<<" ";
		}
		cout<<endl;
	}

    cout<<"ans:"<<ans.m[0][0]+ans.m[0][1];
}

int main(){
	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);cout.tie(NULL);
	
	//for fibonnaci sequence
	// T^k * f(n) = f(n+1)

    int n;
    cin>>n;

	solve(n);
	

	return 0;



}

