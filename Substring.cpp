#include<iostream>
#include<string>

using namespace std;

bool isSafeMessage(string &message)
{
	string wrong = "crap";
	int size1 = message.length();
	int size2 = wrong.length();
	
	for (int i = 0; i <= size1 - size2; i++)
	{
		bool found = true;

		for (int j = 0; j < size2 ; j++)
		{
			if (message[i+j] != wrong[j])
			{
				found = false;
				break;
			}
		}
		if (found)
		{
			return false;
		}
	}
	return true;
}


int main()
{
	string msg = "I am a crap programmer";
	
	if (isSafeMessage(msg))
	{
		cout << "Message is safe." << endl;
	}
	else
	{
		cout << "Message contains crap word!" << endl;
	}

	return 0;
}