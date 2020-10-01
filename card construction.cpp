#include <bits/stdc++.h>
using namespace std;

#define int long long int
int find_mx(int n){

	int index = 0;
	for(int i=sqrt(n)-5;i<n;i++){
		if(n- (i*(3*i+1))/2 >=0){
			index = i;
		}
	}

	n -= ((index*(3*index+1))/2);
	return n;
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

		int n;
		cin>>n;

		int ans = 0;

		if(n<2){
			cout<<"0\n";
			continue;
		}

		int count = 0;
		int rem = find_mx(n);
		if(rem>=0){
			count++;
			while(rem>=2){
				rem = find_mx(rem);
				count++;
			}
		}else{
			count = 0;
		}
		//cout<<rem<<"\n";
	    cout<<count<<"\n";
		

	}
}

