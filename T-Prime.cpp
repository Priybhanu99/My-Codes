#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e6+5;

// vector<int> prime;
int prime[N+1];
void seive(int n){

	 // 0 means not prime, 1 means prime
	
	//traverse on all odd nos and mark them as prime
	for(int i=3;i<=n;i+=2) prime[i] = 1;

		for(int i=3;i<=n;i++){
		if(prime[i]==1){ //if number is prime then mark all its multiple as not prime
			
			for(int j=i*i;j<=n;j+=2*i){ //take jumps of 2i to traverse on odd nos only
				prime[j] = 0;
			}
		}
	}

	prime[1] = 0;
	prime[2] = 1; 

	// for(int i=2;i<n;i++){
	// 	if(a[i]==1)  prime.push_back(i);
	// }

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
	int a[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	seive(N);

	for (int i = 0; i < n; ++i)
	{
		int sq = sqrt(a[i]);
		if(sq*sq==a[i]){
			if(prime[sq]==1){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}else{
			cout<<"NO"<<endl;
		}
	}
}

