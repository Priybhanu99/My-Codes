#include <bits/stdc++.h>
using namespace std;

#define int long long int
int N;
vector<int> b,c;

struct mat{
	int m[N][N];

	void eye(){
		for (int i = 0; i < N; ++i)
		{
			m[i][i] = 1;
		}
	}

	mat operator* (const mat a)const{
		mat r;
		for(int i=0;i<N;i++){
			for(int j=0;j<N;j++){
				for(int k=0;k<N;k++){
					r.m[i][j] += m[i][k]*a.m[k][j];
				}
			}
		}
		return r;
	}
}

mat makematT(){
	mat t;
	for (int i = 0; i < N; ++i)
	{
		for (int j=0;j<N;j++)
		{
			if(i==j+1){
				t.m[i][j] = 1;
			}else{
				t.m[i][j] = 0;
			}
		}
	}
	for (int i = 0; i < N; ++i)
	{
		t.m[N-1][i] = c[i];
	}

	return t;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	cin>>t; while(t--){

		int k,n;
		cin>>N;
		for (int i = 0; i < k; ++i)
		{
			cin>>b[i];
		}
		for (int i = 0; i < k; ++i)
		{
			cin>>c[i];
		}
		cin>>n;

		mat T = makematT();


	}
}

