#include<iostream>
#define size 50
using namespace std;
int main()
{
	int ar[size],i,op[size],n,j;
	float sum=0,sum1=0;
	cout << "input size :";
	cin >> n;
	cout << "Enter The burst time" << endl;
	for(i=0;i<n;i++)
	{
		cout << "P" << i+1 << ": ";
		cin >> ar[i];
		//cout <<endl;
	}
	for(j=0;j<n;j++)
	{
		op[j] = sum;
		sum = sum+ar[j];
	}
	cout << "Waiting time" <<endl;
	for(i=0;i<n;i++)
	{
		cout <<"P"<< i+1 << ":" << op[i] <<endl;
		sum1 = sum1 + op[i];
	}
	cout << endl;
	cout << "Average waiting time :" << sum1/n << "units" <<endl;
	cout << "Total time required is : " << sum <<" units" <<endl;
	cout << "Average time for complete process : " << sum/n << " units";
}
