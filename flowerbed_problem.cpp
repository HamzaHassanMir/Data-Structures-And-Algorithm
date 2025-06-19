#include <vector>
#include <iostream>

using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n) 
{
	int count = 0; 
	int length = flowerbed.size();

	for (int i = 0; i < length; i++) 
	{
		if (flowerbed[i] == 0) 
		{
			bool left_empty = (i == 0 || flowerbed[i - 1] == 0); 
			bool right_empty = (i == length - 1 || flowerbed[i + 1] == 0);

			if (left_empty && right_empty) 
			{
				flowerbed[i] = 1;
				count++;
				if (count >= n) return true; 
				i++; 
			}
		}
	}

	return count >= n;
}

int main() {
	vector<int> flowerbed1 = { 1, 0, 0, 0, 1 };
	int n1 = 1;
	cout << (canPlaceFlowers(flowerbed1, n1) ? "true" : "false") << endl;
	vector<int> flowerbed2 = { 1, 0, 0, 0, 1 };
	int n2 = 2;
	cout << (canPlaceFlowers(flowerbed2, n2) ? "true" : "false") << endl;

	return 0;
}
