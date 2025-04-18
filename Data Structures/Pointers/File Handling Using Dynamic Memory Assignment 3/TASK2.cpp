#include <iostream>
#include <fstream>
using namespace std;

void read(const char* filename, int*& arr, int& size);
bool is_prime(int num);

int main() 
{
	const char* filename = "input.txt";
	int* arr;
	int size;

	read(filename, arr, size);

	for (int i = 0; i < size; i++) 
	{
		int range = arr[i];
		cout << "Prime numbers from 1 to " << range << " are:" << std::endl;
		for (int k = 2; k <= range; k++) 
		{
			if (is_prime(k)) 
			{
				cout << k << " ";
			}
		}
		cout << endl;
	}
	delete[] arr;
	arr = nullptr;
	return 0;
}

void read(const char* filename, int*& arr, int& size)
{
	ifstream filereading;
	filereading.open(filename);
	if (!filereading)
	{
		cout << "Error opening file: " << filename << endl;
	}

	filereading >> size;
	arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		filereading >> arr[i];
	}

	filereading.close();
}

bool is_prime(int num)
{
	if (num <= 1)
	{
		return false;
	}
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}