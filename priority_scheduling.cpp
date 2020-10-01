#include <bits/stdc++.h>
using namespace std;

//#define int long long int
struct process{
	int at;
	int bt;
	int priority;
};

bool comp(process a,process b){
	return a.priority>b.priority;
}

int main(){

	int n;
	cout<<"Enter the no of processes :";
	cin>>n;
	process p[n];

	cout<<"Enter the arrival time,burst time and priority :\n";
	for (int i = 0; i < n; ++i){
		cin>>p[i].at>>p[i].bt>>p[i].priority;
	}

	sort(p,p+n,comp);

	int wt[n],tt[n];
	int sum_of_bt = 0;
	for (int i = 0; i < n; ++i)
	{
		wt[i] = sum_of_bt - p[i].at;
		sum_of_bt += p[i].bt;
		tt[i] = wt[i] + p[i].bt;
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

