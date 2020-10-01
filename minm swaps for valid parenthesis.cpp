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
	string s;
	cin>>s;

	if(n%2==1){
		cout<<"-1\n";
		return 0;
	}

	vector<int> pos;
	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='('){
			pos.push_back(i+1);
		}
	}

	int count = 0;
	int p = 0;

	int ans = 0;

	int x = 0;

	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='('){
			count++;
			
		}else{
			count--;
		}

		if(count<0){
			//find next pos of opening braces and swap till that index
			x++;
		}else if(count == 0){
			x++;
			if(x>1){
				ans += x;
			}
			x = 0;
		}else{
			x= 0;
		}
	}

	cout<<ans;
	//}
}

