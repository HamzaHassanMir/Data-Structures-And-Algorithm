#include<iostream>

using namespace std;
// Stack is data structure that follows the rule of (LIFO) Last In First Out

template <typename T>
class Stack
{
private:
	T *arr;
	int totalSize;
	int index;

public:
	Stack(int size)
	{
		totalSize = size;
		arr = new T[totalSize];
		index = -1;
	}

	~Stack()
	{
		delete[] arr;
		cout << "Dynamic Memory is Freed " << endl;
	}

	bool isFull() const
	{
		if (index == totalSize - 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isEmpty() const
	{
		if (index == -1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void push(T value)
	{
		if (!isFull())
		{
			index++;
			arr[index] = value;
		}
		else
		{
			cout << "Stack is Full " << endl;
		}
	}

	T pop()
	{
		if (!isEmpty())
		{
			return arr[index--];
		}
		else
		{
			cout << "Stack is Empty " << endl;
			throw runtime_error("Cannot pop value from stack");
		}
	}

	T top() const
	{
		if (!isEmpty())
		{
			return arr[index];
		}
		else
		{
			throw runtime_error("Stack is empty no top element available");
		}
	}

	void display() const
	{
		for (int i = 0; i <= index; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	int stackSize = 0;
	cout << "Enter Size of Stack: ";
	cin >> stackSize;

	Stack<int> s1(stackSize);

	for (int i = 0; i < stackSize ; i++)
	{
		s1.push(i * 2);
	}

	s1.display();
	cout << "The value on top that is removed: " << s1.pop() << endl;
	cout << "Now the value on top is: " << s1.top() << endl;

	s1.display();
	return 0;
}