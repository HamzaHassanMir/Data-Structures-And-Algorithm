#include <iostream>

using namespace std;

bool prime(int num) 
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

int main() 
{
	int arr[5] = {1,2,3,4,5};

	for (int i = 0; i < 5; i++) 
	{
		if (prime(arr[i])) 
		{
			cout << "Addresses :" << &arr[i] << endl;
		}
	}
	return 0;
}