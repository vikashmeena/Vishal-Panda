#include<iostream>
#include<stdlib.h>
using namespace::std;
int main()
{
	system("cls");
	float large(float arr[],int n);
	char ch;
	int i=0;
	float amount[50],biggest;
	cout<<"Enter the number of element (max 50)\n";
	int p;
	cin>>p;
	for(i=0;i<p;i++)
	{
		cout<<"\nEnter the element no. "<<i+1<<"\t";
		cin>>amount[i];
	}
	biggest=large(amount,p);
	cout<<"The Largest Element in Given Array is : "<<biggest<<"\n";
	return 0;
}
float large(float arr[],int n)
{
	float max=arr[0];
	for(int j=1;j<n;j++)
	{
		if(arr[j]>max)
		max=arr[j];
	}
	return max;
}
