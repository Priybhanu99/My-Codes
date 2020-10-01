#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5;
// int a[N+1];
bool prime[N+1]; 

void SieveOfEratosthenes(int n) 
{ 


	memset(prime, true, sizeof(prime)); 

	for (int p=2; p*p<=n; p++) 
	{ 

		if (prime[p] == true) 
		{ 
			for (int i=p*p; i<=n; i += p) 
				prime[i] = false; 
		} 
	} 

    // Print all prime numbers 
    // for (int p=2; p<=n; p++) 
    //    if (prime[p]) 
    //       cout << p << " "; 
} 

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	SieveOfEratosthenes(N);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		pair<int,bool> a[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i].first;
			a[i].second = false;
		}

		int count=0;
		while(count<n){
			for (int i = 0; i < n; ++i)
			{
				if(a[i].second==true){
					continue;
				}
				if(prime[a[i].first]){
					cout<<i+1<<" ";
					a[i].second = true;
					count++;
				}
			}

			for (int i = 0; i < n; ++i)
			{
				a[i].first += 1;
			}
			
		}
	}
}

