#include <bits/stdc++.h>
using namespace std;

bool find_bit(int a,int n){
	
	while(n--){
		a = a>>1;
	}
	if(a&1){
		return true;
	}else{
		return  false;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	// #ifndef ONLINE_JUDGE
 //    freopen("input.txt","r",stdin);
 //    freopen("output.txt","w",stdout);
 //    #endif

	int n;
	//cin>>t;
	//while(t--){`

		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}

		int res = a[0];
		for(int i=1;i<n;i++){
			res ^= a[i];
		}

        cout<<res<<endl;

		//res = 3^7 = 011^111 = 100

		int count =0;
		int temp = res;
		while(temp>0){
			if(temp&1){
				break;
			}
			temp = temp>>1;
			count++;
		}

        cout<<"index of set bit :"<<count<<endl;

		int xor1=0;

		//now finding all the elements having bit at this index
		for(int i=0;i<n;i++){
			if(find_bit(a[i],count)){
				xor1 ^= a[i];
			}
		}

		// int xor1 = ans[0];
		// for (int i = 0; i < n; ++i)
		// {
		// 	xor1 ^= ans[i];
		// }

        cout<<"xor1 is: "<<xor1<<endl;

		int x = xor1^res;

		if(x<xor1){
			cout<<x<<" "<<xor1;
		}else{
			cout<<xor1<<" "<<x;
		}

		return  0;


	//}
}

