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

		for(int i=0;i<q;i++){
			int X1,X2,Y;
			cin>>X1>>X2>>Y;

			int count = 0;

			for(int i=1;i<n;i++){
				int x1 = a[i].first;
				int x2 = a[i+1].first;
				int y1 = a[i].second;
				int y2 = a[i+1].second;

				if(y1<=Y&&Y<=y2 || y1>=Y&&Y>=y2){
					int m = (y2-y1)/(x2-x1);
					int c = (y1-m*x1);

					int x = (Y-c)/m;
					if(X1<=x&&x<=X2){
						//cout<<"here"<<i<<"\n";
						if(x1==X2&&y1==Y){
							
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

