#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int N = 1e5;
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

void prime_factorisaion(map<int,int> &divisors,int n){

	for(auto i:prime){
		if(n<1){
			break;
		}
		if(n%i==0){
			while(n%i==0){
				divisors[i]++;
				n =  n/i;
			}
		}
	}
}


int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	seive(N);
	cin>>t; while(t--){

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		map<int,int> divisors;
		for(int i=0;i<n;i++){
			prime_factorisaion(divisors,a[i]);
		}

		int ans = 1;
		for(auto i:divisors){
			ans *= (i.second+1);
			// cout<<i.first<<" "<<i.second<<endl;
		}


		cout<<ans<<endl;


	}
}

