#include<iostream>
using namespace std;
int main()
{
	int *ar,i=0,*op,j=0;
	float sum=0,sum1=0;
	cout << "Enter The burst time else enter -1 to exit" << endl;
	ar = new int[20];
	for(;;)
	{
		cout << "P" << i+1 << ": ";
		cin >> ar[i];
		if(ar[i] == -1)
		{
			break;
		}
		i++;
		//cout <<endl;
	}
	op = new int[20];
	for(j=0;j<i;j++)
	{
		op[j] = sum;
		sum = sum+ar[j];
	}
	cout << "Waiting time" <<endl;
	for(j=0;j<i;j++)
	{
		cout <<"P"<< j+1 << ":" << op[j] <<endl;
		sum1 = sum1 + op[j];
	}
	delete [] ar;
	delete [] op;
	cout << endl;
	cout << "Average waiting time :" << sum1/i << "units" <<endl;
	cout << "Total time required is : " << sum <<" units" <<endl;
	cout << "Average time for complete process : " << sum/i << " units";
}
