#include <bits/stdc++.h>
using namespace std;

#define int long long int

void printans(int *allocation,int *processSize){
	cout << "\nProcess No.\tProcess Size\tBlock no.\n"; 
	for (int i = 0; i < sizeof(processSize); i++) 
	{ 
		cout << " " << i+1 << "\t\t"<< processSize[i] << "\t\t"; 
		if (allocation[i] != -1) 
			cout << allocation[i] + 1; 
		else
			cout << "Not Allocated"; 
		cout << endl; 
	} 

	cout<<"\n";
}

void func_firstFit(int blockSize[], int m,int processSize[], int n) 
{ 

	int allocation[n]; 

	memset(allocation, -1, sizeof(allocation)); 

	for (int i = 0; i < n; i++) 
	{ 
		for (int j = 0; j < m; j++) 
		{ 
			if (blockSize[j] >= processSize[i]) 
			{ 
				allocation[i] = j; 

				blockSize[j] -= processSize[i]; 

				break; 
			} 
		} 
	} 

	printans(allocation,processSize);
}

void func_bestFit(int blockSize[], int m, int processSize[], int n) 
{ 
	int allocation[n]; 
	memset(allocation, -1, sizeof(allocation)); 

	for (int i=0; i<n; i++) 
	{ 
		int bestIdx = -1; 
		for (int j=0; j<m; j++) 
		{ 
			if (blockSize[j] >= processSize[i]) 
			{ 
				if (bestIdx == -1) 
					bestIdx = j; 
				else if (blockSize[bestIdx] > blockSize[j]) 
					bestIdx = j; 
			} 
		} 

		if (bestIdx != -1) 
		{ 
			allocation[i] = bestIdx; 
			blockSize[bestIdx] -= processSize[i]; 
		} 
	} 

	printans(allocation,processSize);

}

void func_worstFit(int blockSize[], int m, int processSize[],  
	int n) 
{ 

	int allocation[n]; 

	memset(allocation, -1, sizeof(allocation)); 

	for (int i=0; i<n; i++) 
	{ 
		int wstIdx = -1; 
		for (int j=0; j<m; j++) 
		{ 
			if (blockSize[j] >= processSize[i]) 
			{ 
				if (wstIdx == -1) 
					wstIdx = j; 
				else if (blockSize[wstIdx] < blockSize[j]) 
					wstIdx = j; 
			} 
		} 
		if (wstIdx != -1) 
		{ 
			allocation[i] = wstIdx; 
			blockSize[wstIdx] -= processSize[i]; 
		} 
	} 

	printans(allocation,processSize);

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

	int blockSize[n],processSize[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>blockSize[i];
	}

	int m;
	cin>>m;

	for (int i = 0; i < n; ++i)
	{
		cin>>processSize[i];
	}

	cout<<"BEST FIT:";
	func_bestFit(blockSize,n,processSize,m);
	cout<<"FIRST FIT:";
	func_firstFit(blockSize,n,processSize,m);
	cout<<"WPRST FIT";
	func_worstFit(blockSize,n,processSize,m);
}

