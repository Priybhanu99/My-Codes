#include <bits/stdc++.h>
using namespace std;

#define int long long int

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
		if(a[i]==1)  cout<<i<<" ";
	}

}

int fun(int arr[],int n, int k) 
{ 
    // unodered map 'um' implemented as 
    // hash table 
	unordered_map<int, int> um; 

    // 'mod_arr[i]' stores (sum[0..i] % k) 
	int mod_arr[n], max = 0; 
	int curr_sum = 0; 

    // traverse arr[] and build up the 
    // array 'mod_arr[]' 
	for (int i = 0; i < n; i++) 
	{ 
		curr_sum += arr[i]; 

        // as the sum can be negative, taking modulo twice 
		mod_arr[i] = ((curr_sum % k) + k) % k;         
	}     

	for (int i = 0; i < n; i++) 
	{ 
        // if true then sum(0..i) is divisible 
        // by k 
		if (mod_arr[i] != 0) 
            // update 'max' 
			max = i + 1; 

        // if value 'mod_arr[i]' not present in 'um' 
        // then store it in 'um' with index of its 
        // first occurrence         
		else if (um.find(mod_arr[i]) == um.end()) 
			um[mod_arr[i]] = i; 

		else
            // if true, then update 'max' 
			if (max < (i - um[mod_arr[i]])) 
				max = i - um[mod_arr[i]];             
		} 

    // required length of longest subarray with 
    // sum divisible by 'k' 
		return max; 
	}  

	int32_t main(){
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	 #endif

		int t;
		cin>>t; while(t--){

			int n,x;
			cin>>n>>x;
			int a[n];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}

			int ans = fun(a,n,x);
			if(ans==0){
				ans = -1;
			}
			cout<<ans<<"\n";

		}
	}

