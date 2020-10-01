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

		map<int,int> map;
		map[5] = 0;
		map[10] = 0;
		map[15] = 0;

		bool flag = true;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]==5){

				map[5]++;

			}else if(a[i]==10){
				if(map[5]==0){
					flag = false;
					break;
				}

				map[5]--;
				map[10]++;
			}else{
				if(map[10]==0 && map[5]<2){
					flag = false;
					break;
				}

				if(map[10]>0){
					map[10]--;
					map[15]++;
				}else{
					map[5] -= 2;
					map[15]++;
				}
			}
		}

		if(flag==true){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}

	}
}

