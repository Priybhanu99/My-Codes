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
	int t;
	cin>>t; while(t--){

		prime.clear();
		int l,r;
		cin>>l>>r;
		
		seive(sqrt(r));

		int a[r-l+1];// all primes
		fill(a,a+r-l+1,1);




		for(auto primes:prime){



			int start = (l/primes)*primes;
			//if(start < l) start = l*2;


			for(int i=start;i<=r;i+=primes){

				if(i<l) continue;
				
				a[i-l] = 0;
				
			}
		}


		for(int i=0;i<r-l+1;i++){
			if(a[i]==1){
				cout<<i+l<<endl;
			}
            //cout<<a[i]<<" ";
		}

		cout<<endl;

	}
}

