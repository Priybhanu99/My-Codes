#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int solve(vector<int> scores,int k){

	sort(scores.begin(),scores.end());
    int count = 0;
    int rank_no = 1;

    vector<int> rank(scores.size());
    rank[0] = 1;
    for(int i=1;i<scores.size();i++){
        if(scores[i]==scores[i-1]){
            rank[i] = rank[i-1];
            rank_no++;
        }else{
            rank[i] = rank_no;
            rank_no++;
        }
    }

    for(auto i:rank){
    	cout<<i<<"\n";
    }

    for(auto i:rank){
        if(i>k){
            break;
        }
        count++;
    }

    return count;
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

	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<solve(a,k);

	
	int xx = 1,xx2 = 0;
	xx*=2;
	xx2++;
	xx++;
	xx2 += 2;
	xx2 = 0;
	xx=0;
	


	//}

}
