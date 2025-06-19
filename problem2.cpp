#include<iostream>
#include<string>

using namespace std;

bool isSafeMessage(string message)
{
	string wrong = "crap";
	int size1 = message.lenght();
	int size2 = wrong.lenght();

	for (int i = 0; i < size1); i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (message[i] == wrong[j])
			{
				return fasle;
				break;
			}
			else
			{
				return true;
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