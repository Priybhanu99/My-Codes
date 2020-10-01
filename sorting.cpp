#include <bits/stdc++.h>
using namespace std;

// #define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

void bubblesort(int *a,int n){
	// int m  = sizeof(a);
	// cout<<m<<" ";


	for(int i=0;i<n-1;i++){

		for(int j = 0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		
		// cout<<a[i]<<" ";
	}
}

void selection_sort(int *a,int n){


	//select minimum and insert it at the first position
	for(int i=0;i<n;i++){
		int index = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				index = i;
			}
		}

		swap(a[index],a[i]);
	}
}

void insertionsort(int *a,int n){
	//first half is sorted
	//insert an element and place it in its accurate position in sorted array

	//NO SWAPPING IN SELECTION SORT,, KEY IS IMP.
	for(int i=1;i<n;i++){
		int key = a[i];
		int j = i-1;
		while(j>=0 && a[j]>key){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}

}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	//cin>>t; while(t--){

	int n;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	// bubblesort(a,n);
	// insertionsort(a,n);


	insertionsort(a,n);

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	

	//}

}