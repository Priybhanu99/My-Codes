#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<vector<int> > answer;

void generate_Subsets(int *a,int n,int sum){

	for(int i=1;i<(1<<n);i++){
		int m = i;
		int temp = sum;
		int j=0;
		vector<int> ans;
		while(i!=0){
			if(i&1){
				temp -= a[j];
				ans.push_back(a[j]);
			}
			j++;
			i = i>>1;
		}
		i = m;
		bool flag = 1;
		
		if(temp==0){
			for(auto v:answer){
				if(v==ans){
					flag = 0;
					break;
				}
			}
			if(flag){
				answer.push_back(ans);
			}
			sort(answer.begin(), answer.end());
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

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum;
	cin>>sum; 

	sort(a,a+n);
	// unique(a,a+n);

	generate_Subsets(a,n,sum);

	for(auto i:answer){
		for(auto x:i){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	
}

