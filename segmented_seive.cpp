#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

int pr[N];
vector<int> primes;

void seive(){
	int i,j;
	for(i=2;i<N;i++){
		if(!pr[i]){
			primes.push_back(i);
			for(j=i;j<N;j+=i){
				pr[j]++;
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int l,r;
	//cin>>t;
	//while(t--){

		cin>>l>>r;
		int n = r-l+1;
		int a[n];

		for (int i = 0; i < n; ++i)
		{
			a[i] = i+l;
		}

		int i;

		for(int prime:primes){
			if(prime*prime>r) break;

			int start = (l/prime)*prime;
			for(i=start;i<=r;i+=start){
				if(i<l) continue;
				a[i] =a[i-l]/prime;
			}
		}
		

	//}
}

