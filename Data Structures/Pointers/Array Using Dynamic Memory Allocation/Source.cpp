#include<iostream>
using namespace std;

void sort(int* , int size);

int main1()
{
	int size = 0;
	cout << "Enter array size: " << endl;
	cin >> size;
	int* arr = NULL;
	arr = new int[size];
	sort(arr, size);
	
	delete[]arr;
	return 0;
}

void sort(int* ptr, int size)
{
	cout << "Enter elements of array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}

	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (ptr[i]>ptr[j])
			{
				int temp;
				temp = ptr[j];
				ptr[j] = ptr[i];
				ptr[i] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << ptr[i] << " ";
	}
}


