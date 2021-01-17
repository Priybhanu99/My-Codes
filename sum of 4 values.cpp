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
	int flag = 0;
	for (int i = 0; i < n-3; ++i)
	{
		if(flag){
			break;
		}
		for(int j=i+1;j<n-2;j++){

			if(flag){
				break;
			}
			int gg = target - a[i].F - a[j].F;

			int l = j+1,r=n-1;

			while(l<r){
				int x = a[l].F+a[r].F;
				if(x==gg){
					cout<<a[i].S<<" "<<a[j].S<<" "<<a[l].S<<" "<<a[r].S;
					flag = 1;
					break;
				}else if(x<gg){
					l++;
				}else{
					r--;
				}
			}
		}
	}

	if(flag==0){
		cout<<"IMPOSSIBLE\n";
	}




	//}

}