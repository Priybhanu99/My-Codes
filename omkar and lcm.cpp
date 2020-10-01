#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;

	// seive(100005);
	cin>>t; while(t--){

		int n;
		cin>>n;

		vector<int> factors;

		int temp = n;

		for (int i=1;i*i<=n;i++){
			if(n%i==0){
				if(i*i==n){
					factors.push_back(i);
				}else{
					factors.push_back(i);
					factors.push_back(n/i);
				}
				n = n/i;
			}
		}


		bool flag = true;

		int x = 0,y=0;
		int ans = INT_MAX;
		for(int i=0;i<factors.size();i++){
			
			int num = temp-factors[i];
			if(num<=0){
				continue;
			}

			int lcm = (factors[i]*num)/__gcd(factors[i],num);
			if(lcm<=ans){
				x = min(num,factors[i]);
				y = max(num,factors[i]);
			}

		}

		cout<<x<<" "<<y<<"\n";
		

	}

}

/* 5 1 4
7 1 6
9 3 6
11 1 10
13 1 12
15 5 10
17 1 16
19 1 18
21 7 14
23 1 22
25 5 20
27 9 18
29 1 28
45 15 30
33 11 22
35 7 28
49 7 42
121 11 110
115 23 92
105 35 70*/