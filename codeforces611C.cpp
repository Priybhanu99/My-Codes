#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int n;
	//cin>>t; while(t--){

	cin>>n;
	int a[n+1];
	int temp[n+1];
	for(int i=1;i<=n;i++){
		int num;
		cin>>num;
		a[i] = num;
		temp[i] = num;
	}

	sort(temp,temp+n+1);

	vector<int> missing;

	for (int i = 1; i <= n; ++i)
	{
		bool ans = binary_search(temp+1,temp+n+1,i);
		if(ans!=true){
			missing.push_back(i);
		}
	}



	// for (int i = 1; i <= n; ++i)
	// {
	// 	if(a[i]==0){
	// 		missing.push_back(i);
	// 	}
	// }

	for (int i = 1; i <= n; ++i)
	{
		if(a[i]==0){
			for(auto j:missing){
				if(i!=j){
					a[i] = j;
					j = -10;
					continue;
				}
			}
		}
	}

	for (int i = 1; i <= n; ++i)
	{
		cout<<a[i]<<" ";
	}






	//}
}

