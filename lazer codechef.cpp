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

		int q;
		cin>>n>>q;

		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}

		for (int i = 0; i < q; ++i)
		{
			int l,r,y;
			cin>>l>>r>>y;

			int count = 0;
			for(int i=1;i<n;i++){

				//if y lies in between
				if((a[i]<=y && y<=a[i+1]) || (a[i]>=y && y>=a[i+1])){

					//find the intersection point
					//y = mx+c
					int m = (a[i+1]-a[i])/(1);
					int c = a[i] - m*i;

					//cout<<m<<" "<<c<<"\n";

					float x = (float)(y-c)/m*1.0;
					//cout<<x<<"\n";

					//if x lies in range
					if((l<=x && x<=r) && (i<=x&&x<=i+1)){
						if((i==r && a[i]==y)||(i+1==l && a[i+1]==y)){
							//cout<<"hi\n";
						}else{	
							//cout<<"Line Segment "<<i<<"\n";
							count++;
						}
					}

				}
			}
			cout<<count<<"\n";
		}

	}
}

