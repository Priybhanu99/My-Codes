#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	ll int n,k;
	//cin>>t;
	//while(t--){

		cin>>n>>k;
		ll int a[n];
		for(ll int i=0;i<n;i++){
			cin>>a[i];
		}

		int pos[n+1];
		for(int i=0;i<n;i++){
			pos[a[i]] = i;
		}
	
		ll int count=0;

        	for(ll int i=0;i<n;i++){
          
			if(count>=k){
				break;
			}else{
				if(a[i]!=n-i){
					int x = a[i];
					int y = pos[n-i];
					swap(a[i],a[pos[n-i]]);
					count++;
					swap(pos[x],y);
				}
			}
		
		}

		for (ll int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}

		return 0;

	//}
}

