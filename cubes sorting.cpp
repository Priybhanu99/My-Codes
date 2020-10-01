#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define P pair<int,int>
#define pb push_back
#define F first
#define S second

int _mergeSort(int arr[], int temp[], int left, int right); 
int merge(int arr[], int temp[], int left, int mid, int right); 

int mergeSort(int arr[], int array_size) 
{ 
	int temp[array_size]; 
	return _mergeSort(arr, temp, 0, array_size - 1); 
} 


int _mergeSort(int arr[], int temp[], int left, int right) 
{ 
	int mid, inv_count = 0; 
	if (right > left) { 
       
		mid = (right + left) / 2; 

     
		inv_count += _mergeSort(arr, temp, left, mid); 
		inv_count += _mergeSort(arr, temp, mid + 1, right); 

		inv_count += merge(arr, temp, left, mid + 1, right); 
	} 
	return inv_count; 
} 

/* This funt merges two sorted arrays  
and returns inversion count in the arrays.*/
int merge(int arr[], int temp[], int left, 
	int mid, int right) 
{ 
	int i, j, k; 
	int inv_count = 0; 

    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
	while ((i <= mid - 1) && (j <= right)) { 
		if (arr[i] <= arr[j]) { 
			temp[k++] = arr[i++]; 
		} 
		else { 
			temp[k++] = arr[j++]; 

            /* this is tricky -- see above  
            explanation/diagram for merge()*/
			inv_count = inv_count + (mid - i); 
		} 
	} 

    /* Copy the remaining elements of left subarray  
(if there are any) to temp*/
	while (i <= mid - 1) 
		temp[k++] = arr[i++]; 

    /* Copy the remaining elements of right subarray  
(if there are any) to temp*/
	while (j <= right) 
		temp[k++] = arr[j++]; 

    /*Copy back the merged elements to original array*/
	for (i = left; i <= right; i++) 
		arr[i] = temp[i]; 

	return inv_count; 
} 

int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	 #endif

	int t;
	cin>>t; while(t--){

		int n;
		cin>>n;

		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			// b[i] = a[i];
		}

		

		int count = mergeSort(a,n);
		if(count<(n*(n-1)/2)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}



	}

}