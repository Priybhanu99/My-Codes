#include<bits/stdc++.h>
using namespace std;

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif

	int t;
	cin>>t;

	while(t--){

		int n,m,k;
		cin>>n>>m>>k;
		map<int,int> count;
		for(int i=0;i<k;i++){
			count[k] = 0;
		}

		for(int i=0;i<n;i++){

			int a[k];
			for (int i = 0; i < k; ++i)
			{
				cin>>a[i];
			}

			if(i==0){
				cout<<a[0]<<" ";

				int val = a[0];

				for(int x=0;x<k;x++){
					if(a[x]==val){
						count[x]++;
					}
				}
			}else{

				int minm = INT_MAX;
				int val = 0;
				int index = 0;

				for(int x=0;x<k;x++){
					if(count[x]<=minm){
						minm = count[x];
						val = a[x];
						index = x;
					}
				}

				cout<<val<<" ";
				for(int x=0;x<k;x++){
					if(a[x]==val){
						count[x]++;
					}
				}
			}			
		}

		cout<<"\n";

	}
}

