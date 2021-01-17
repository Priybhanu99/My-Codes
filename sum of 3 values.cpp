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

	int t;
	//cin>>t; while(t--){

	int n,target;
	cin>>n>>target;

	vector<P> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i].F;
		a[i].S = i+1;
	}

	sort(a.begin(), a.end());

	int x,y,z;
	int flag = 0;
	for (int i = 0; i < n-2; ++i)
	{

		if(flag){
			break;
		}

		int temp = target - a[i].F;

		int l = i+1,r=n-1;
		while(l<r){
			int gg = a[l].F + a[r].F;
			if(gg==temp){
				x = a[i].S,y = a[l].S, z = a[r].S;
				flag = 1;
				break;
			}else if(gg<temp){
				l++;
			}else{
				r--;
			}
		}
	}

	if(flag==0){
		cout<<"IMPOSSIBLE\n";
	}else{
		cout<<x<<" "<<y<<" "<<z;
	}

	

	//}

}