#include<iostream>
using namespace std;

int main()
{
	int rows = 0;
	cout << "Number of rows: " << endl;
	cin >> rows;

	int** array = new int*[rows];

	int columns[] = {2,3,1};

	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[columns[i]];
	}

	cout << "Enter values:" << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns[i]; j++)
		{
			cin >> array[i][j];
		}
	}
	cout << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns[i]; j++)
		{
			cout << array[i][j] << " ";
		} cout << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete [] array[i];
	}

	delete[]array;
	return 0;
}