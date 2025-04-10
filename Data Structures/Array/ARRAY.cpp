#include<iostream>
using namespace std;

template<typename A>
class Arraylist
{
private:
	int current_size;
	A *arr;
	int total_size;

public:
	Arraylist(int t)
	{
		current_size = 0;
		total_size = t;
		arr = new A[total_size];
	}
	~Arraylist()
	{
		delete[]arr;
		arr = nullptr;
	}

	bool if_full()
	{
		if (current_size == total_size)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void push(A value)
	{
		if (!if_full())
		{
			arr[current_size] = value;
			current_size++;
		}
		else
		{
			cout << "Array is full " << endl;
		}
	}

	void insert_Head(A value)
	{
		if (!if_full())
		{
			for (int i = current_size; i > 0; i--) {
				arr[i] = arr[i - 1];
			}
			arr[0] = value;
			current_size++;
		}
		else
		{
			int newsize = total_size * 2;
			A *newarr = new A[newsize];
			newarr[0] = value;

			for (int i = 0; i < current_size; i++)
			{
				newarr[i + 1] = arr[i];
			}
			delete[]arr;

			arr = newarr;
			total_size = newsize;
			current_size++;
		}
	}
	void insert_Tail(A value)
	{
		if (!if_full())
		{
			arr[current_size] = value;
			current_size++;
		}
		else
		{

		int newsize = total_size*2;
		A *newarr = new A[newsize];

		for (int i = 0; i < current_size; i++)
		{
			newarr[i] = arr[i];
		}
		newarr[current_size] = value;

		delete[]arr;
		arr = newarr;
		total_size = newsize;
		current_size++;
	}
	}

	void remove_Head()
	{
		if (current_size == 0)
		{
			cout << "Array is empty " << endl;
		}
		else
		{
			for (int i = 0; i < current_size - 1; i++)
			{
				arr[i] = arr[i + 1];
			}
			current_size--;
		}
	}

	void remove_Tail()
	{
		if (current_size == 0)
		{
			cout << "Array is empty " << endl;
		}
		else
		{
			current_size--;
		}
	}

	void display() const
	{
		for (int i = 0; i < current_size; i++)
		{
			cout << arr[i] << " ";
		}
	}
};

int main()
{
	Arraylist <int> a1(5);
	for (int i = 0; i < 5; i++)
	{
		a1.push(i+2);
	}

	a1.insert_Head(26);
	a1.insert_Head(24);
	a1.insert_Tail(9);
	a1.insert_Tail(23);
	a1.remove_Tail();
	a1.remove_Head();
	a1.display();

	return 0;
}