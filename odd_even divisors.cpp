#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool iseven(int n){
	int sq = sqrt(n);
	if(sq*sq==n){
		return false;
	}
	return true;
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

		int l,r;
		cin>>l>>r;
		int left,right;
		left = min(l,r);
		right = max(l,r);

		int count=0;
		for (int i = left; i <= right; ++i)
		{
			if(iseven(i)){
				count++;
			}
		}

		cout<<count<<endl;

	}
}

