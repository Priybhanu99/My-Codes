#include <bits/stdc++.h>
using namespace std;


int main(){
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

		sort(a,a+n);

		int sum;
		cin>>sum;

		int lo=0;
		int hi= n-1;

		int mini,maxi;
		int len = 0;

		while(lo<hi){
			if(a[lo]+a[hi]>sum){
				hi--;
			}else if(a[lo]+a[hi]<sum){
				lo++;
			}else{
				mini = a[lo];
				maxi = a[hi];
				lo++;
				//len = max(len,hi-lo);
			}
		}
		cout<<"Deepak should buy roses whose prices are "<<mini<<" and "<<maxi<<"."<<endl;
	}
}

