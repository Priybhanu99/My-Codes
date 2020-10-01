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

	int t;
	cin>>t; while(t--){

		int n,k;
		cin>>n>>k;

		string s;
		cin>>s;

		int i=0;
		int index = -1;
		int temp = 0;
		for(;i<n;i++){
			if(s[i]=='1'){
				index = i;
				break;
			}
		}

		if(index==-1){
			i = 0;
		}

		temp = i;

		int count = 0;
		for(;i<n;i+=k+1){
			if(s[i]=='0'){
				s[i] = '1';
				count++;
			}

		}

		temp-=k+1;
		// if(temp>0){
		for(;temp>=0;temp-=k+1){
			if(s[temp]=='0'){
				count++;
			}
		}
		// }

		cout<<count<<"\n";




	}
}

