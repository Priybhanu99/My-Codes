#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

const int N = 

void printGolomb(int n) 
{ 
	int dp[n + 1]; 

    // base cases 
	dp[1] = 1; 
	cout << dp[1] << " "; 

    // Finding and printing first  
    // n terms of Golomb Sequence. 
	for (int i = 2; i <= n; i++)  
	{ 
		dp[i] = 1 + dp[i - dp[dp[i - 1]]]; 
		cout << dp[i] << " "; 
	} 
} 

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int n;
	cin>>n;

	int g[200000], ig[200000];

	g[1] = 1;
	ig[1] = 1;
	for (int i = 2; i < 1000; ++i) {
		g[i] = 1 + g[i - g[g[i - 1]]];
		ig[i] = ig[i - 1] + i * g[i];
	}

	int k = 1;
    while (ig[k] < 1000000) // 10^6
    {
    	++k;
    }

    cout << k - 1 << ' ' << ig[k - 1] << endl;
    cout << k << ' ' << ig[k] << endl;

    
    //}
}