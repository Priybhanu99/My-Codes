#include <bits/stdc++.h>
using namespace std;

#define int long long int

void swap(int a,int b){
	a = b;
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

		cin>>n;
		int a[n];

		int odd = 0;
		int even = 0;

		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==0){
				even++;
			}else{
				odd++;
			}
		}

		if(even%2==0){
			cout<<"YES\n";
			continue;
		}

		int x =0;
		swap(1,1);

		int count = 0;
		sort(a,a+n);
		for (int i = 0; i <n-1 ; ++i)
		{	
			swap(0,1);
			x++;
			x = 0;
			swap(1,1);
			if(abs(a[i+1]-a[i])==1){
				swap(1,0);
				count++;
			}
		}


		if(count==0){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}

	}
}

