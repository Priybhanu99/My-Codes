#include <bits/stdc++.h>
using namespace std;

vector<int> prime;

void seive(int n){

	int a[n+1]; // 0 means not prime, 1 means prime
	
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

	for(int i=2;i<n;i++){
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
		
		int n;
		cin>>n;

		seive(sqrt(n));

		vector<int> factors;
		int i=0;
		int p = prime[0];
		
		while(p*p<=n){
			
			while(n%p==0){
				factors.push_back(p);
				n = n/p;
			}
			++i;
			p = prime[i];
		}

		if(n!=1){
			factors.push_back(n);
		}

		for(auto i:factors){
			cout<<i<<" ";
		}

}

