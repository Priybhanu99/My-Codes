#include <bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
	return a>b;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int n,k;
	//cin>>t;
	//while(t--){

		cin>>n>>k;
		int a[n],temp[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			temp[i] = a[i];
		}

		sort(temp,temp+n,compare);

		int count = 0;
		for(int i=0;i<n-1;i++){
			if(count<k){
				if(temp[i]!=a[i]){
					//temp will have a greater number than arr always.
					swap(a[i],a[lower_bound(a,a+n,temp[i])-a]);
					count++;
				}
			}
		}

		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}

		return 0;

	//}
}

