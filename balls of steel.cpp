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
	cin>>t; while(t--){

		int n,k;
		cin>>n>>k;

		P a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].F>>a[i].S;
		}

		sort(a,a+n);

		// int i = 0;
		// int count = 0;

		bool flag = true;

		int ans1 = INT_MAX;
		for(int i=0;i<n;i++){

			int left = i,right = i;
			int ans = 1;
			int index_l = i;

			int tempa = 0;
			while(index_l!=0){
				for(int j=i-1;j>=0;j--){
					int dist = abs(a[i].F -a[j].F) + abs(a[i].S-a[j].S);
					if(dist<=k){
						index_l = j;
					}else{
						break;
					}
				}

				if(left!=0 && index_l==i){
					flag = false;
					break;
				}

				i = index_l;
				tempa++;

			}

			ans += tempa/2;

			if(!flag){
				continue;
			}

			int index_r = i;

			tempa = 0;

			while(index_r!=n-1){
				for(int j = i+1;j<n;j++){
					int dist = abs(a[i].F -a[j].F) + abs(a[i].S-a[j].S);
					if(dist<=k){
						index_r = j;
					}else{
						break;
					}
				}


				if(right!=n-1 && index_r == i){
					flag = false;
					break;
				}

				i = index_r;

				tempa++;

			}

			if(!flag){
				continue;
			}

			ans+=tempa/2;

			ans1 = min(ans1,ans);

		}

		if(!flag){
			cout<<-1<<"\n";
			continue;
		}

		cout<<ans1<<"\n";


	}

}