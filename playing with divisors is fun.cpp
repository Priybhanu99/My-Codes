#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5;
int mod = 1e9 + 7;
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

vector<int> finddivisors(int n){

	vector<int> ans;

	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if(i*i==n){
				ans.push_back(i);
			}else{
				ans.push_back(i);
				ans.push_back(n/i);
			}
		}
	}
	return ans;
}

void findfactors(map<int,int> &ans,int n){

	// for(auto i:prime){
	// 	if(n<1){
	// 		break;
	// 	}
	// 	if(n%i==0){
	// 		while(n%i==0){
	// 			ans[i] = (ans[i]+1)%mod;
	// 			n =  n/i;
	// 		}
	// 	}
	// }

	for(int i=1;i*i<=n;i++){
		if(n<1){
			break;
		}
		if(n%i==0){
			while(n%i==0){
				ans[i]++;
				n/=i;
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

	int n;
	cin>>n;

	seive(N);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}


	int num=1;
	for(int i=0;i<n;i++){
		num *= pow(prime[i],a[i]);
	}
	cout<<num<<endl;

	vector<int> factors = finddivisors(num);
	for(auto i:factors){
		cout<<i<<" ";
	}
	cout<<endl;

	map<int,int> ans;

	for(auto i:factors){
		findfactors(ans,i);
	}

	int val = 1;
	for(auto i:ans){
		val =((val%mod)*((i.second+1)%mod))%mod;
	}
	cout<<val%mod;



}

