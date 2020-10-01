#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5;
vector<int> prime;

void seive(){

	int n = N;
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
		if(a[i]==1) prime.push_back(i);
	}

}

vector<int> primefac(int n){

	vector<int> a;

	int p = prime[0];

	int i= 0;

	while(p*p<=n){
		while(n%p==0){
			a.push_back(p);
			n /= p;
		}
		p = prime[i+1];
		i++;
	}

	if(n!=1){
		a.push_back(n);
	}

	return a;

}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	cin>>n;
	int a[n];

	seive();

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	vector<vector<int> > ans;
	for (int i = 0; i < n; ++i)
	{
		vector<int> x = primefac(a[i]);

		for(auto nos:x){
			cout<<nos<<",";
		}

		cout<<"\n";
	}




	//}
}

