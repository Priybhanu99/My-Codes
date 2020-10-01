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

		int n,x;
		cin>>n>>x;

		int a[n];
		map<int,int> p;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<x;i++){
			int num;
			cin>>num;

			p[num-1] = 1;
		}

		while(1){

			bool flag = true;
			for(int i=0;i<n-1;i++){
				if(a[i]>a[i+1] && p.count(i)!=0){
					flag = false;
					swap(a[i],a[i+1]);
				}
			}

			if(flag==true){
				break;
			}
		}

		if(is_sorted(a,a+n)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}



	}
}

