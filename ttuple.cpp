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

		int p,q,r;
		cin>>p>>q>>r;

		int a,b,c;
		cin>>a>>b>>c;


		map<float,int> mult,diff;
		map<float,int> mult1,diff1;

		if(a!=p){
			if(p!=0){
				mult[ap]++;
			}
			if(a!=0){
				mult1[p%a]++;
			}
			diff[p-a]++;
			diff1[a-p]++;
		}
		if(b!=q){
			if(q!=0){
				mult[b%q]++;
			}
			if(b!=0){
				mult1[q%b]++;
			}
			diff[q-b]++;
			diff[b-q]++;
		}
		if(c!=r){
			if(r!=0){
				mult[c%r]++;
			}
			if(c!=0){
				mult1[r%c]++;
			}
			diff[r-c]++;
			diff1[c-r]++;
		}


		int ans = min(min(mult.size(),diff.size()),min(mult1.size(),diff1.size()));
		cout<<ans<<"\n";





	}
}

