#include <bits/stdc++.h>
using namespace std;

#define int long long int

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;

	cin>>n;
	//int a[n];

	vector<int> even,odd;

	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		if(num%2==0){
			even.push_back(num);
		}else{
			odd.push_back(num);
		}
	}

	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());

	int ans = 0;
	while(even.size()>0 && odd.size()>0){
		even.pop_back();
		odd.pop_back();
	}

	if(even.size()==0&&odd.size()==0){
		ans = 0;
	}else if(even.size()!=0&&odd.size()==0){
		if(even.size()-odd.size()==1){
			ans = 0;
			continue;
		}
		ans += even[0];
	}else if(even.size()==0&&odd.size()!=0){
		ans += odd[0];
		if(odd.size()-even.size()==1){
			ans = 0;
		}
	}else{
		ans += min(odd[0],even[0]);
	}

	cout<<ans;
}

