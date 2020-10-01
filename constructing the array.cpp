#include <bits/stdc++.h>
using namespace std;

#define int long long int

int curr = 0;
int s = 0;

void solve(int* a,int i,int j){

	if(i>j){
		return;
	}

	int mid = 0;

	if((j-i+1)%2!=0){
		mid = (i+j)/2;
	}else{
		mid = (i+j-1)/2;
	}

	if(a[mid]!=0){
		return;
	}

	//cout<<"mid :"<<mid<<" curr:"<<curr<<"\n";

	a[mid] = curr;
	curr += 1;

	// if(mid-i>=j-mid){
	// 	solve(a,i,mid);
	// 	solve(a,mid+1,j);
	// }else{
	// 	solve(a,mid+1,j);
	// 	solve(a,i,mid);
	// }
	
	if(j>mid+1){
		solve(a,mid+1,j);
	}
	if(mid-1>=i){
		solve(a,i,mid-1);
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

		cin>>n;
		int a[n+1];
		memset(a,0,sizeof(a));

		curr = 1;
		s = n;
		solve(a,1,n);

		for (int i = 1; i <= n; ++i)
		{
			cout<<a[i]<<" ";
		}

		cout<<"\n";

	}
}

// 1 
// 1 2 
// 2 1 3 
// 3 1 2 4 
// 2 4 1 3 5 
// 3 4 1 5 2 6 

// Firstly, we choose the segment [1;5] and assign a[3]:=1, so a becomes [0,0,1,0,0];
// then we choose the segment [1;2] and assign a[1]:=2, so a becomes [2,0,1,0,0];
// then we choose the segment [4;5] and assign a[4]:=3, so a becomes [2,0,1,3,0];
// then we choose the segment [2;2] and assign a[2]:=4, so a becomes [2,4,1,3,0];
// and at last we choose the segment [5;5] and assign a[5]:=5, so a becomes [2,4,1,3,5].