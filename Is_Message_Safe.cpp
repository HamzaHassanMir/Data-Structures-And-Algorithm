#include<iostream>
#include<string>

using namespace std;

bool isSafeMessage(string message)
{
	string wrong = "crap";
	int size1 = message.length();
	int size2 = wrong.length();

	for (int i = 0; i < size1-size2; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (message[i+j] != wrong[j])
			{
				cout << "not safe" << endl;
				return true;
				break;
			}
			else
			{
				cout << "msg is safe" << endl;
				return false;
			}
		}
	}

}

int main()
{
	string message1 = "i am a crap programmer";

	isSafeMessage(message1);


	return 0;
}