#include <bits/stdc++.h>
using namespace std;

bool generate_subsets(int *a,int n,int i){

	//cout<<"i :"<<i<<"  ";
	int j=0,sum=0;
	//cout<<"sum :";
	while(i){
		if(i&1==1){
				//include this in the ans
			
			sum += a[j];
			//cout<<sum<<" ";
		}
		j++;
		i = i>>1;
	}
	
	//cout<<"  returning ";
	if(sum==0){
		// cout<<"t";
		//cout<<endl;
		return true;
	}else{
		// cout<<"f";
		// cout<<endl;
		return false;
	}

}

int main(){
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

		bool flag = false;
		for(int i =1;i<(1<<n);i++){
			bool ans = generate_subsets(a,n,i);
			if(ans){
				cout<<"Yes"<<endl;
				flag = true;
				break;
			}
		}

		if(flag==false){
			cout<<"No"<<endl;
		}
		
	}
}

