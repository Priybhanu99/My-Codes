#include <bits/stdc++.h>
using namespace std;

#define db(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << '\n'; }
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
	const char* comma = strchr(names + 1, ',');
	cout.write(names, comma - names) << " : " << arg1 << " | "; __f(comma + 1, args...);
}

bool check(int *a,int k,int mid,int n){
	int sum =0;
	int count =1;
	for(int i=0;i<n;i++){
		sum+= a[i];
		if(sum>mid){
			count++;
			sum = a[i];
		}
		//if(count>k) return false;
	}

	return count<=k;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	 #ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
	    #endif
	
	int k,n;
	cin>>k>>n;

	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	int maxm = -1;
	int hi =0;
	for (int i = 0; i < n; ++i)
	{
		maxm =max(maxm,a[i]);
		hi += a[i];
	}

	
	int mid,res;
	int lo = maxm;

	while(lo<hi){
		mid = (lo+hi)/2;
		//db(lo,mid,hi);
		if(check(a,k,mid,n)){
			//res = mid;
			hi = mid;
		}else{
			lo = mid + 1;
		}
	}

	cout<<lo;
}

