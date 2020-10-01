#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t,n;
	cin>>t; while(t--){

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		for(int i=1;i<n;i++){
			a[i] += a[i-1];
		}

		bool flag = false;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				int ans = a[j]-a[i];
				if(ans==0){
					flag = true;
					break;
				}
			}
		}

		if(flag){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}

	}
}

