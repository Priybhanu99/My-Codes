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
		int q;
		cin>>q;
		pair<int,int> a[n+1];
		for(int i=1;i<=n;i++){
			a[i].first = i;
			int b;
			cin>>b;
			a[i].second=b;
		}

		for (int i = 0; i < q; ++i)
		{
			int x1,x2,y;
			cin>>x1>>x2>>y;

			int count=0;

			for (int i = 1; i < n; ++i)
			{
				// int l = a[i].first;
				// int r = a[i].second;

				if(y>=a[i].second&&y<=a[i+1].second||y>=a[i+1].second&&y<=a[i].second){
					if(x2>=a[i+1].first){
						if(a[i].first==x2 && a[i].second==y){
							//cout<<"here";
						}else{
							cout<<"Line segment "<<i<<"\n";
							count++;
						}
					}
				}
				
			}
			cout<<count<<"\n";
		}


	}
}

