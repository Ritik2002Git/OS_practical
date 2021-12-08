#include<iostream>
using namespace std;
void WaitTime( int wt[], int bt[], int n){
	for (int i=0;i<n;i++){
		wt[i]=0;
		for(int j=0;j<i;j++)
			wt[i]+=bt[j];
			
	}
	
}
void tatTime(int tat[],int bt[], int wt[], int n){
	
	for(int i=0;i<n;i++)
		tat[i]=bt[i]+wt[i];
		

	
}
void averageTime(int tat[], int wt[], int n){
	
	float avTAT=0;
	float avWait=0;
	for(int i=0;i<n;i++){
		avTAT+=tat[i];
		avWait+=wt[i];
	}
	
	cout<<"\n\n Average Waiting time is : "<<avWait/n;
	cout<<"\n Average Turn Round Time is :"<<avTAT/n;
	
}
void InputData(int bt[], int pr[], int n){
	
	cout<<"\n Enter number of process: (max 20)";
	cin>>n;
	cout<<"\n Enter burst time of Process : ";
	for(int i=0;i<n;i++){
		cout<<" P["<<i<<"] =";
		cin>>bt[i];
		pr[i]=i;
	}
	
}
int main(){
	int n;
	int pr[20];
	int wt[20];
	int tat[20];
	int bt[20];
	
	Public: 
	//InputData(bt,pr,n);
	cout<<"\n Enter number of process: (max 20):  ";
	cin>>n;
	cout<<"\n Enter burst time of Process : \n";
	for(int i=0;i<n;i++){
		cout<<" P["<<i<<"] =";
		cin>>bt[i];
		pr[i]=i;
	}
	WaitTime(wt, bt, n);
	tatTime(tat,bt, wt, n);
	
	cout<<"\n P[i]\twt[i]\tTAT[i]" <<endl;
	for(int i=0;i<n;i++){
		cout<<" P["<<i+1<<"]\t   "<<wt[i]<<"\t    "<<tat[i];
		cout<<"\n";
		
	}
	averageTime(tat,wt,n);
	
	
}
