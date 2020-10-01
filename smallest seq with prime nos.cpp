#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<int> Solution::solve(int A, int B, int C, int D)
{
	vector<int> res;
	if(D==0)
		return res;
	
	int ia = 0, ib = 0, ic = 0;
	int nexta = A, nextb = B, nextc = C;
	
	for(int i=0;i<D;i++)
	{
		res.push_back(min(nexta, min(nextb, nextc)));
		
		if(res[i] == nexta)
			nexta = res[ia++] * A;
		if(res[i] == nextb)
			nextb = res[ib++] * B;
		if(res[i] == nextc)
			nextc = res[ic++] * C;
	}
	
	return res;
}

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t,n;
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	//}
}

