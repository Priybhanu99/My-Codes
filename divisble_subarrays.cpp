#include <bits/stdc++.h>
using namespace std;

int nCtwo(int n){

	int ans =n*(n-1);
	return ans/2;

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t;
	cin>>t; while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int prefix[n+1]={0};
        int count[n+1]={0};
        count[0] = 1;
		prefix[0] = 0;
      
		for(int i=1;i<=n;i++){
			prefix[i] = prefix[i-1]+a[i-1];
			prefix[i] %= n;
			count[prefix[i]]++;
		}


		int ans = 0;
		for(int i=0;i<n;i++){
            if(count[i]>1){
                ans += nCtwo(count[i]);
            }
		}

		cout<<ans<<endl;
		
	}
}

