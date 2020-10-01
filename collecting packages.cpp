#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool cmp(pair<int,int> a,pair<int,int> b){

	if(a.second!=b.second){
		return a.second<b.second;
	}else{
		return a.first<b.first;
	}
}

string getcode(int ix,int iy,int fx,int fy){

	string ans;
	
	for(int i=ix;i<fx;i++){
		ans += 'R';
	}
	for(int i=iy;i<fy;i++){
		ans += 'U';
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

	int t,n;
	cin>>t; while(t--){

		cin>>n;
		pair<int,int> a[n];
		for(int i=0;i<n;i++){
			cin>>a[i].first;
			cin>>a[i].second;
		}

		sort(a,a+n,cmp);

		string ans=getcode(0,0,a[0].first,a[0].second);
		//cout<<ans<<"->";

		bool flag = true;

		for (int i = 1; i < n; ++i)
		{
			if(a[i].first<a[i-1].first){
				flag = false;
				break;
			}

			ans += getcode(a[i-1].first,a[i-1].second,a[i].first,a[i].second);
		}

		if(flag==true){
			cout<<"YES\n";
			cout<<ans<<"\n";
		}else{
			cout<<"NO\n";
		}
	}
}

// YES
// RUUURRRRUU
// NO
// YES
// RRRRUUU


