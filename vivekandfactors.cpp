#include <bits/stdc++.h>
using namespace std;

#define int long long int
const int N = 1e5;
map<int,int> a;

int findsumofdiv(int n){
	int ans = 0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			if(i*i==n){
				ans +=i;
			}else{
				ans += i;
				ans += n/i;
			}
		}
	}
	return ans;
}
void solve(){

	for(int i=1;i<N;i++){
		int ans = findsumofdiv(i);
		a[ans] = i;
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
	solve();
	while(n!=0){

		if(a.count(n)==0){
			cout<<"-1"<<endl;
		}else{
			cout<<a[n]<<endl;
		}

		int x;
		cin>>x;
		n = x;
	}
}

