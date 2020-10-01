#include <bits/stdc++.h>
using namespace std;

vector<int> prime;

void seive(int n){

	int a[n+1]={}; // 0 means not prime, 1 means prime
	
	//traverse on all odd nos and mark them as prime
	for(int i=3;i<=n;i+=2) a[i] = 1;

		for(int i=3;i<=n;i++){
		if(a[i]==1){ //if number is prime then mark all its multiple as not prime
			
			for(int j=i*i;j<=n;j+=2*i){ //take jumps of 2i to traverse on odd nos only
				a[j] = 0;
			}
		}
	}

	a[1] = 0;
	a[2] = 1; 

	for(int i=2;i<=n;i++){
		if(a[i]==1)  prime.push_back(i);
	}

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif
	int t;
	cin>>t; while(t--){

		prime.clear();
		int l,r;
		cin>>l>>r;
		
		seive(sqrt(r));

		int n = r - l + 1;
		int i;
		int a[n];
		for (i = 0; i < n; i++) {
			a[i] = i + l;
		}
		for (auto primes : prime) {
			if (primes * primes > r) break;
			int start = (l / primes) * primes;
			if (primes >= l) start = primes * 2;

			for (i = start; i <= r; i += primes) {
				if (i < l) continue;
				a[i - l] /= primes;
			}
		}
		int count = 0;
		for (i = 0; i < n; i++) {
			if (i + l == 1 || a[i] != l + i) continue;
			cout<<a[i]<<endl;
		}

		cout<<endl;

	}
}




