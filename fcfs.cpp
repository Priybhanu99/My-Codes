#include <bits/stdc++.h>
using namespace std;

//#define int long long int

int main(){

	int n;
	cout<<"Enter the no of processes :";
	cin>>n;

	int at[n],bt[n];
	cout<<"\nEnter the arrival time :";
	for (int i = 0; i < n; ++i)
	{
		cin>>at[i];
	}

	cout<<"\nEnter the burst time :";
	for (int i = 0; i < n; ++i)
	{
		cin>>bt[i];
	}

	int wt[n],tt[n];
	int sum_of_bt = 0;
	for (int i = 0; i < n; ++i)
	{
		wt[i] = sum_of_bt - at[i];
		sum_of_bt += bt[i];
		tt[i] = wt[i] + bt[i];
	}

	double avg_wt = 0;
	for (int i = 0; i < n; ++i)
	{
		avg_wt+=wt[i];
	}

	double avg_tt = 0;
	for (int i = 0; i < n; ++i)
	{
		avg_tt+=tt[i];
	}

	cout<<"\nAverage Waiting Time is :"<<fixed<<setprecision(2)<<avg_wt/(n*1.00);

	cout<<"\nAverage Turn around Time is :"<<fixed<<setprecision(2)<<avg_tt/(n*1.00);

}

