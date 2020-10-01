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

	int n,d;
	cin>>n>>d;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);

	int l =0,hi = n-1;

	int count = 0;

	while(l<hi){

		int temp = a[hi]-a[l];
		if(temp==d){
			break;
		}

		if(temp>d){
			hi--;
		}else{
			l++;
		}
		count++;
	}

	cout<<count<<"\n";
	//}

}