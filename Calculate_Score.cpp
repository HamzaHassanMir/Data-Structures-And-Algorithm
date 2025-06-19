#include<iostream>
#include<string>

using namesapce std;

int calculateScore(int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != -1)
		{
			sum = sum + arr[i];
		}
	}
	return sum;
}

int main()
{
	const int = 5;
	int arr[5] = { 2, 3, -1, 5, 6 };

	cout << "SUM of scores of player which finished the competition is " << calculateScore(arr, 5);

	return 0;
}