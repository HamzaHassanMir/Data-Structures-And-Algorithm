#include <iostream>
#include <fstream>
using namespace std;

void regrow(int* &, int& , int& );
void print_array(int* , int );

int main() 
{
	ifstream filereading;
	filereading.open("Data.txt"); 
	if (!filereading.is_open()) 
	{
		cout << "File not found." << endl;
	}
	else
	{

		int* even_numbers = new int[1];
		int* odd_numbers = new int[1];
		int size1 = 0;
		int size2 = 0;
		int even = 1;
		int odd = 1;
		int data;

		while (filereading >> data)
		{
			if (data % 2 == 0)
			{
				if (size1 == even)
				{
					regrow(even_numbers, size1, even);
				}
				even_numbers[size1++] = data;
			}
			else
			{
				if (size2 == odd)
				{
					regrow(odd_numbers, size2, odd);
				}
				odd_numbers[size2++] = data;
			}
		}

		filereading.close();

		print_array(even_numbers, size1);
		print_array(odd_numbers, size2);

		delete[] even_numbers;
		even_numbers = nullptr;
		delete[] odd_numbers;
		odd_numbers = nullptr;
	}
	return 0;
}
void regrow(int* &arr, int& size, int& values)
{
	values *= 2;
	int* temp = new int[values];
	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	delete[] arr;
	arr = temp;
}
void print_array(int* arr, int size)
{
	for (int i = 0; i < size; i++) 
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}