#include<iostream>
#include<stack>

using namespace std;

class Queue
{
private:
	stack<int> input;
	stack<int> output;

public:
	Queue(){}

	void push(int x)
	{
		input.push(x);
	}

	int pop()
	{
		if (input.empty() && output.empty())
		{
			cout << "Queue is empty" << endl;
			return -1;
		}

		if (output.empty())
		{
			while (!input.empty())
			{
				output.push(input.top());
				input.pop();
			}
		}

		int ans = output.top();
		output.pop();
		return ans;
	}

	int peek()
	{
		if (input.empty() && output.empty())
		{
			cout << "Queue is empty" << endl;
			return -1;
		}

		if (output.empty())
		{
			while (!input.empty())
			{
				output.push(input.top());
				input.pop();
			}
		}

		return output.top();
	}
};

int main()
{
	Queue q1;

	for (int i = 0; i < 3; i++)
	{
		q1.push(i * 3);
	}

	cout << "Front value is " << q1.peek() << endl;
	cout << "Value popped: " << q1.pop() << endl;
	cout << "Value popped: " << q1.pop() << endl;
	cout << "Value pushed" << endl;
	q1.push(40);
	cout << "Value popped: " << q1.pop() << endl;
	cout << "Value popped: " << q1.pop() << endl;

	return 0;
}