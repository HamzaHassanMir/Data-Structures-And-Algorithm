#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main()
{
	int number;
	cout << "enter number " << endl;
	cin >> number;

	queue<string> q1;
	q1.push("1");

	for (int i = 0; i < number; i++)
	{
		string num1 = q1.front();
		q1.pop();

		cout << num1 << endl;

		q1.push(num1 + "0");
		q1.push(num1 + "1");
	}

	return 0;
}