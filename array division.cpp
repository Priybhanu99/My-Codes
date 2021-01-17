#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

#define db(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr(names + 1, ',');
	cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}

bool isPossible(int *a,int k,int n,int target){

	int count = 0,sum = 0;
	for (int i = 0; i < n; ++i)
	{
		
		if(sum+a[i]>target){
			count++;
			sum = 0;
		}
		sum += a[i];
	}
	count++;

	bool ans = (count<=k);
	// bool ans = count==(k);
	// db(target,ans,count);
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
	//cin>>t; while(t--){

	int n,k;
	cin>>n>>k;

	int a[n];
	int sum = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum += a[i];
	}

	int l=*max_element(a,a+n),r=sum;
	while(l<r){

		int mid = (l+r)/2;

		if(isPossible(a,k,n,mid)){
			r = mid;
		}else{
			l = mid+1;
		}
	}

	cout<<l;

	//}

}