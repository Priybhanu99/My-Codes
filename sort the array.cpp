#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	vector<pair<int,int>> segments;

	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]){

			int temp = i;
			while(i<n-1 && a[i]>a[i+1]){
				i++;
			}

			segments.pb(make_pair(temp,i));
		}
	}



	if(segments.size()>1){
		cout<<"no\n";
	}else{

		if(segments.size()==0){
			if(is_sorted(a,a+n)){
				cout<<"yes\n";
				cout<<1<<" "<<1<<"\n";
			}else{
				cout<<"no\n";
			}
		}else{
			sort(a+segments[0].F,a+segments[0].S+1);
			if(is_sorted(a,a+n)){
				cout<<"yes\n";
				cout<<segments[0].F+1<<" "<<segments[0].S+1<<"\n";
			}else{

				cout<<"no\n";
			}
		}
	}
	//}

}