#include<iostream>
using namespace std;

int main()
{
	int rows = 0;
	cout << "Enter number of rows: " << endl;
	cin >> rows;

	int sum = 0;

	int** array = new int*[rows];

	int size[] = { 2, 3, 1 };

	for (int i = 0; i < rows; i++)
	{
		array[i] = new int [size[i]];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < size[i]; j++)
		{
			cin >> array[i][j];
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < size[i]; j++)
		{
			sum = sum + array[i][j];
		} cout << "Sum of row " << i + 1 << ": " << sum << endl;
	}

	return 0;
}