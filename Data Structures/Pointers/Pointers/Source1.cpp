#include<iostream>
using namespace std;

int main2()
{
	int arr[6] = {5,1,2,3,4,5};

	int* ptr = arr;
	int sum = 0;

	for (int i = 0; i < 6; i++)
	{
		sum = sum + ptr[i];
	}
	cout << sum << endl;
	return 0;
}