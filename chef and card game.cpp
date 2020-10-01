#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int nod(int n){
	int ans = 0;
	while(n){

		ans += n%10;
		n/=10;
	}

	return ans;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n;
		cin>>n;

		int count1 = 0,count2 = 0;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;

			a = nod(a);
			b = nod(b);

			if(a>b){
				count1++;
			}else if(a<b){
				count2++;
			}else{
				count1++;
				count2++;
			}
		}
		if(count1>count2){
			cout<<"0 "<<count1<<"\n";
		}else if(count1<count2){
			cout<<"1 "<<count2<<"\n";
		}else{
			cout<<"2 "<<count2<<"\n";
		}

	}

}