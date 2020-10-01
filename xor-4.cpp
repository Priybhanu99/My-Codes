#include <bits/stdc++.h>
using namespace std;

bool solve(int *a,int n){

	if(n>=130){
		return true;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			for (int k = j+1; k < n; ++k)
			{
				for (int x = k+1; x < n; ++x)
				{
					if((a[i]^a[j]^a[k]^a[x])==0){
						return true;
					}
				}
			}
		}
	}

	return false;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int t,n;
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	    #endif
	//cin>>t; while(t--){

	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}


	bool ans = solve(a,n);
	if(ans==true){
		cout<<"YES";
	}else{
		cout<<"NO";
	}

	//}
}

