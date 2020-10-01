#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int n;
	//cin>>t;
	//while(t--){
		cin>>n;
		
		int ans[64];
		for(int i=0;i<n;i++){
			int no;
			cin>>no;
			int j=0;
			while(no){
				ans[j] += (no&1);
				no = no>>1;
				j++;
			}
		}

		int p=1,res=0;
		for(int i=0;i<63;i++){
			ans[i] %= 3;
			res += p*ans[i];
			p = p*2;
		}

		cout<<res;

		
	//}
}

