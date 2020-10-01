#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

		int n;
		cin>>n;
		int q;
		cin>>q;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		while(q--){
			int choice;
			cin>>choice;
			if(choice == 1){
				int l,r;
				cin>>l>>r;
				int min = INT_MAX;
				for(int i=l-1;i<r;i++){
					if(a[i]<min){
						min = a[i];
					}
				}
				cout<<min<<endl;
			}else if(choice==2){
				int index;
				cin>>index;
				int num;
				cin>>num;
				a[index-1] = num;
			}
		}

		

	//}
}

