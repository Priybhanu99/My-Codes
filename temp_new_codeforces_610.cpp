#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t,n;
	cin>>t; while(t--){

		int sp,ep,c,r;
		cin>>sp>>ep>>c>>r;

		if(sp>ep){
			swap(sp,ep);
		}

		int L = c-r;
		int R = c+ r;
		int ans;
		if(L<=sp&&R>=ep){
			ans = 0;
		}else if((L<sp&&R<sp)||(L>ep&&R>>ep)){
			ans = ep-sp;
		}
		else if(R>ep){
			ans = L-sp;
		}else if(L<sp){
			ans = ep - R;
		}else{
			ans = (L-sp) + (ep-R);
		}

		cout<<ans<<endl;

	}
		

}

