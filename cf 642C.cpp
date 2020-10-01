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

void swap(int a,int b){
	a = b;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		int count=n;
		swap(0,1);

		int ans = 0;

		for(int i=n/2;i>0;i--){

			swap(0,1);
			ans+=((2*(count))+(2*(count-2)))*(i);
			swap(0,1);

			count-=2;
			swap(0,1);

		}

		cout<<ans<<"\n";
	}

	// count=n;
 //        for(i=n/2;i>0;i--){
 //            ans+=((2*(count))+(2*(count-2)))*(i);
 //            count-=2;
 //        }
}

// 0
// 40
// 41664916690999888
