#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

void sortColors(vector<int>& nums) {
	int a[3] = {};
	for(auto i:nums){
		a[i]++;
	}

	int i = 0;
	while(i<nums.size()){
		while(a[0]--){
			nums[i] = 0;
			i++;
            // cout<<i<<" ";
		}
		while(a[1]--){
			nums[i] = 1;
			i++;
		}
		while(a[2]--){
			nums[i] = 2;
			i++;
		}
	}
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

	vector<int> nums{0,1,0,2,1};
	sortColors(nums);

	//}

}