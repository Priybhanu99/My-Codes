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
	int x = 0;
	cin>>t; while(t--){
		
		x++;
		cin>>n;
		int k;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int first,second;
		first = second = 0; 
		for (int i = 0; i < n-1; ++i)
		{
			if((a[i+1]-a[i])>first){
				second = first;
				first = a[i+1]-a[i];
			}else if((a[i+1]-a[i])>second && (a[i+1]-a[i])!=first){
				second = a[i+1]-a[i];
			}
		}
		cout<<"Case #"<<x<<": ";
		float ans = (float)first/2;
		int one = ceil(ans);
        //cout<<one<<"\n";
		cout<<max(one,second)<<"\n";
	}
}

