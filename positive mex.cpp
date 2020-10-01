#include <bits/stdc++.h>
using namespace std;

#define int long long int
int mod = 998244353;

int sum = 0;
void subsequenceans(int* a,int n){

	for(int z=0;z<(1<<n);z++){

		int i = z;
		int j=0;
		vector<int> subseq;
		int index[10000];
		memset(index,0,sizeof(index));
		while(i){
			int last_bit = i&1;
			if(last_bit==1){
				subseq.push_back(a[j]);
				index[a[j]] = 1;
			}
			j++;
			i = i>>1;
		}
		//cout<<subseq.size()<<" ";
		if(subseq.size()==0){
			sum += 1;
		}else{
			//cout<<"hi";
			for(int x=1;x<1000;x++){
				if(index[x]==0){
					sum+=x;
					//cout<<x<<" ";
					break;
				}
			}
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

	int t,n;
	cin>>t; while(t--){

		sum = 0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);

		subsequenceans(a,n);
		cout<<sum%mod<<"\n";

	}
}

