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

		//int a[n];
		for(int i=0;i<n;i++){
			map<int,int> maps;
			int maxm_val = 0;
			int maxm = 0;
			for(int j=0;j<k;j++){

				int num;
				cin>>num;
				maps[num] ++;
				if(maps[num]>maxm_val){
					maxm_val = maps[num];
					maxm = num;
				}
			}
			cout<<maxm<<" ";
		}

		cout<<"\n";

	}
}

