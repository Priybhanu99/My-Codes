#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t,n;
	//cin>>t; while(t--){

		cin>>n;
		//value,index
		pair<int,int> one[n];
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			one[i].first = num;
			one[i].second = i;
		}
		int two[n];
		for(int i=0;i<n;i++){
			cin>>two[i];
		}

		sort(one,one+n);

		int ans = 1;

		for (int i = n-2; i >= 0; i--)
		{
			if(two[one[i].second]<two[one[i-1].second]){
				ans++;
			}

			
		}

		cout<<ans;


	//}
}

