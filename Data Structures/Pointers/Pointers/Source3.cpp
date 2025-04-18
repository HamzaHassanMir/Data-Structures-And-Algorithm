#include <iostream>
using namespace std;
void countEvenOdd(int *arr, int size)
{
	int evenCount = 0;
	int oddCount = 0;
	for (int i = 0; i < size;i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenCount++;
		}
		else
		{
			oddCount++;
		}
	}
	cout << "Number of even elements: " << evenCount << endl;
	cout << "Number of odd elements: " << oddCount << endl;
}
int main()
{
	int array[5] = { 1, 2, 3, 4, 5 };
	int size = 5;
	int* ptr=array;
	countEvenOdd(ptr,size);
	
	return 0;
}