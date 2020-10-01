#include <bits/stdc++.h>
using namespace std;

#define int long long int

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
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int pos1 = 0;
		for(int i=0;i<n;i++){
			if(a[i]==1){
				pos1 = i;
				break;
			}
		}

		bool flag = true;
		for(int i=pos1;i<pos1+n-1;i++){
			if(a[i%n]>a[(i+1)%n]){
				flag = false;
				break;
			}
		}

		bool flag2 = true;
		reverse(a,a+n);
		pos1 = n-pos1-1;
		for(int i=pos1;i<pos1+n-1;i++){
			if(a[i%n]>a[(i+1)%n]){
				flag2 = false;
				break;
			}
		}

		//cout<<flag<<" "<<flag2<<"\n";

		if(flag||flag2){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
}

