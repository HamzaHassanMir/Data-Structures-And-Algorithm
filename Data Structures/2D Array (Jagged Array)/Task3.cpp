#include<iostream>
using namespace std;

void display(int**, int, int[]);

int main()
{
	int rows = 0;
	cout << "Enter number of rows: " << endl;
	cin >> rows;

	int max;

	int** array = new int*[rows];

	int size[] = { 2, 3, 1 };

	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[size[i]];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < size[i]; j++)
		{
			cin >> array[i][j];
		}
	}
	display(array, rows, size);

	

	return 0;
}

void display(int** array, int rows, int size[])
{
	int max;
	for (int i = 0; i < rows; i++)
	{
		max = array[i][0];
		for (int j = 0; j < size[i]; j++)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
			}
		} cout << "Maximum in each row is " << i + 1 << " : " << max << endl;
	}

}