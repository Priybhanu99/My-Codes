#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5+1;

vector<int> primes;
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
		if(a[i]==1)  primes.push_back(i);
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
		vector<int> divisors;

		if(n==1){
			cout<<"1"<<endl;
			continue;
		}
		int temp = n;

		for(auto i:primes){
			if(i>n){
				break;
			}
			if(n%i==0){
				divisors.push_back(i);
				while(n%i==0){
					n = n/i;
				}
			}
		}

		if(temp==n){
			divisors.push_back(n);
		}

		double ans=1;

		for(auto i:divisors){
			// cout<<i<<" ";
			ans *= (1.00-1.0/double(i));
		}

		cout<<ans*temp<<endl;

	}
}

