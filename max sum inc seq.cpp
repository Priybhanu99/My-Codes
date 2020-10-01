#include <bits/stdc++.h>
using namespace std;

#define int long long int

void max_sum_inc_seq(int *a,int n){

	int lis[n];
	memset(lis,1,sizeof(lis));

	vector<int> seq[n];


	vector<int> temp;
	temp.push_back(a[0]);
	seq[0] = temp;


	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			int mxm = 0;
			int index = -1;
			if(a[i]>=a[j]){
				mxm = lis[j];
				index = j;
			}
			lis[i] = mxm + 1;

			if(index!=-1){
				seq[i] = seq[index];
				seq[i].push_back(a[i]);
			}
		}
	}

	int ans = 0;
	int mxm_ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans = 0;
		for(auto x:seq[i]){
			ans += x;

		}
		

		mxm_ans = max(mxm_ans,ans);
		

	}

	cout<<mxm_ans<<"\n";


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
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		max_sum_inc_seq(a,n);


	}
}

