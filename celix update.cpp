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

int solve(int m, int n) 
{ 
	int ans = 1; 
	

	for (int i = n; i < (m + n - 1); i++) { 


		ans *= i; 

		ans /= (i - n + 1); 


	} 

	return ans; 
} 

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;	cin>>t; while(t--){

		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;

		int x = (x2-x1)+1;
		int y = (y2-y1)+1;

		int subt = 0;
		if(x==y){
			subt = x-2;
		}

		if(subt<0){
			subt = 0;
		}

		int ans = solve(x,y);
		cout<<ans-subt<<"\n";

	}
}

