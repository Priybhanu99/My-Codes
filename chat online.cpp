#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int p,q,l,r;
	cin>>p>>q>>l>>r;

	vector<P> a(p),b(q);
	for (int i = 0; i < p; ++i)
	{
		cin>>a[i].F>>a[i].S;
	}

	for (int i = 0; i < q; ++i)
	{
		cin>>b[i].F>>b[i].S;
	}

	int ans = 0;

	// map<int,int> m;
	for(int k=l;k<=r;k++){
		for (int i = 0; i < p; ++i)
		{
			bool flag = true;
			for(int j=0;j<q;j++){

				if(b[j].S + k < a[i].F || b[j].F + k > a[i].S){

				}else{
					flag = false;
					ans++;
					break;
				}

			}
			if(flag==false){
				break;
			}
		}
	}

	cout<<ans;

}