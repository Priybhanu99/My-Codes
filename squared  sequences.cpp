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
	cin>>t; while(t--){

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			int num;
			cin>>num;
			if(num%2==0){
				if(num%4==0){
					a[i] = 2;
				}else{
					a[i] = 1;
				}
			}else{
				a[i] = 0;
			}
		}

		map<int, int> prevSum; 

		int res = 0; 
		int ans = (n*(n+1))/2;
    // Sum of elements so far. 
		int sum = 1;
		int currsum = 0; 

		for (int i = 0; i < n; i++) { 

        // Add current element to sum so far. 
			currsum += a[i]; 

        // If currsum is equal to desired sum, 
        // then a new subaay is found. So 
        // increase count of subarrays. 
			if (currsum == sum) {
				res++;         
			}

        // currsum exceeds given sum by currsum  
        //  - sum. Find number of subarrays having  
        // this sum and exclude those subarrays 
        // from currsum by increasing count by  
        // same amount. 
			if (prevSum.find(currsum - sum) != prevSum.end()){ 
				res += (prevSum[currsum - sum]); 
			}


        // Add currsum value to count of  
        // different values of sum. 
			prevSum[currsum]++; 
		} 

		cout<<ans-res<<"\n";
	}
}