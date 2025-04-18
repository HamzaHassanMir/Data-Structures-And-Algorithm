#include <iostream>
#include <fstream>
using namespace std;

const int rows = 100;
const int columns = 100;

int main()
{
	ifstream file("character_data.txt");

	int number_of_rows;
	file >> number_of_rows;
	file.ignore();

	char matrix[rows][columns];
	for (int i = 0; i < number_of_rows; ++i)
	{
		file.getline(matrix[i], columns);
	}

	char character_to_find[5];
	cout << "Enter characters to find: ";
	cin.getline(character_to_find, 5);

	bool match = false;

	for (int i = 0; i < number_of_rows; ++i)
	{
		for (int j = 0; j < columns - 1 && matrix[i][j] != '\0'; ++j)
		{
			if (matrix[i][j] == character_to_find[i])
			{
				match = true;
				cout << "Found at row " << i << " starting column " << j << " ending column " << (j + 1) << "." << endl;
			}
		}
	}
	if (!match)
	{
		cout << "Substring not found." << endl;
	}

	return 0;
}
