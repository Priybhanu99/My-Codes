#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<int> grayCode(int A) {
    if(A==1){
        
        vector<int> base;
        base.push_back(0);
        base.push_back(1);
        return base;
        
    }
    
    vector<int> ans;
    vector<int> rv = grayCode(A-1);
    
    
    
    // ans = rv;
    for(auto i:rv){
        ans.push_back(0+i);
    }
    
    reverse(rv.begin(),rv.end());

    for(auto i:rv){
        ans.push_back(pow(2,A-1)+i);
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
	//cin>>t; while(t--){

	cin>>n;
	
	vector<int> ans = grayCode(n);
	for(auto i:ans){
		cout<<i<<" ";
	}

	//}
}

