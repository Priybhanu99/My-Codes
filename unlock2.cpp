#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	map<int,int> map;
	int n,k;
	//cin>>t;
	//while(t--){

		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			map[a[i]] = i;
		}
		int count=0;
		for(int i=0;i<n;i++){
			if(count>=k){
				break;
			}else{
				if(a[i]!=n-i){
					swap(a[i],a[map[n-i]]);
					count++;
				}
			}
		}

		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<" ";
		}

		return 0;

	//}
}

