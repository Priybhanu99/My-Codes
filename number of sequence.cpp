#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

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
		if(a[i]==1)  primes.pb(i);
	}

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;

	seive(1e5);

	cin>>t; while(t--){

		int n;
		cin>>n;

		int temp_n = n;

		vector<int> factors;
		int p = primes[0];

		int i = 0;

		while(p*p<=n){
			if(n%p==0){

				factors.pb(p);

				while(n%p==0){
					n/=p;
				}
			}

			i++;
			p = primes[i];
		}

		if(n!=1){
			factors.pb(n);
		}


		n = temp_n;

		vector<int> ans;
		int mxm = 0;

		for(auto i:factors){
			vector<int> a;
			int temp = n;
			while((temp/i)%i==0){
				a.pb(i);
				temp/=i;
			}
			a.pb(temp);

			if(a.size()>mxm){
				ans = a;
				mxm = a.size();
			}


		}
		cout<<mxm<<"\n";

		for(auto i:ans){
			cout<<i<<" ";
		}

		cout<<"\n";
	}

}