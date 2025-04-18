#include<iostream>
using namespace std;
void input(int*,int);
void display(int*,int);
int main() 
{
	int *arr=NULL;
	int size=0;
	cout<<"Enter size of an array: ";
	cin>>size;
	arr=new int[size];
	input(arr,size);
	display(arr,size);
	delete[] arr;
	return 0;
}
void input(int* ptr,int s)
{
	for(int i=0;i<s;i++)
	{
		cout<<"Enter value:"<<endl;
		cin>> ptr[i];
	}
}
void display(int* ptr,int s) 
{
	cout<<"Array:"<<endl;
	for(int i=0;i<s;i++)
	{
		cout<< ptr[i]<<" ";
	}
	
}
