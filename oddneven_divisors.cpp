#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<int> divisors;

void sum(int n){

	
	for(int i=1;i*i<=n;i++){

		if(n%i==0){
			if(n/i==i){
				//sqare root so add only once
				divisors.push_back(i);
				
			}else{
				divisors.push_back(i);
				
				divisors.push_back(n/i);
			
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

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		divisors.erase(divisors.begin(), divisors.end());

		sum(n);
		int seven=0,sodd = 0;

		for(auto ans:divisors){
			if(ans%2==0){
				seven+=ans;
			}else{
				sodd+=ans;
			}
		}
		cout<<seven-sodd<<"\n";
	}
}

