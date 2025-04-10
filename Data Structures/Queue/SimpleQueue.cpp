#include<iostream>

using namespace std;

template <typename T>
class Queue
{
private:
	T *arr;
	int size;
	int currentSize;
	int front;

public:
	Queue(int s)
	{
		size = s;
		arr = new T[size];
		front = 0;
		currentSize = 0;
	}
	~Queue()
	{
		delete[] arr;
	}

	bool isFull()
	{
		if (size == currentSize)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool isEmpty()
	{
		if (currentSize == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void enqueue(T value)
	{
		if (!isFull())
		{
			arr[currentSize] = value;
			currentSize++;
		}
		else
		{
			int newsize = size * 2;
			T *temp = new T[newsize];
			for (int i = 0; i < size; i++)
			{
				temp[i] = arr[i];
			}
			delete[] arr;
			arr = temp;
			size = newsize;
			arr[currentSize] = value;
			currentSize++;
		}
	}

	T dequeue()
	{
		if (!isEmpty())
		{
			T answer;
			answer = arr[front];
			for (int i = 0; i < currentSize -1; i++)
			{
				arr[i] = arr[i + 1];
			}
			currentSize--;
			return answer;
		}
		else
		{
			cout << "Queue is Empty" << endl;
			return T();
		}
	}

	T peek()
	{
		return arr[front];
	}

	void display()
	{
		for (int i = 0; i < currentSize; i++)
		{
			cout << arr[i] << " ";
		}
	}

};

int main()
{
	Queue<int> q1(5);

	for (int i = 0; i < 5; i++)
	{
		q1.enqueue(i+1);
	}

	cout << "Peek Element: " << q1.peek() << endl;

	q1.display();
	cout << endl;

	cout << "Element to Dequeue: " << q1.dequeue() << endl;
	cout << "Element to Dequeue: " << q1.dequeue() << endl;
	cout << "Element to Dequeue: " << q1.dequeue() << endl;

	q1.display();
	cout << endl;
	return 0;
}