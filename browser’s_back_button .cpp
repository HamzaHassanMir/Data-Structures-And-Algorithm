#include<iostream>
#include<string>

using namespace std;

class URL
{
	int total = 5;
	string savedURLS[5];
	int current = 0;
public:
	void push(string url)
	{
		if (current < total)
		{
			savedURLS[current] = url;
			current++;
		}
		else
		{
			cout << "Error! Cannot push" << endl;
		}
	}

	void pop()
	{
		if (current != 0)
		{
			current--;
		}
		else
		{
			cout << "FALSE! NO PAGE IS EXISTS TO RETURN" << endl;
		}
	}

	bool goToURL(string URL)
	{
		cout << "www." << URL << endl;
		push(URL);
		return true;

	}

	string currentWEBPage()
	{
		if (current > 0)
		{
			return savedURLS[current - 1];
		}
		return "No pages visited";
	}

	bool goBack()
	{
		if (current > 0)
		{
			pop();
			return true;
		}
		else
		{
			cout << "No page to return to." << endl;
			return false;
		}
	}

	bool goTONEXTPAGE()
	{
		if (current < total -1 && savedURLS[current+1].empty())
		{
			current++;
			cout << savedURLS[current] << endl;
			return true;

		}
		else
		{
			cout << "FALSE! NO PAGE IS EXISTS TO GO" << endl;
			return false;
		}
	}
};

int main()
{
	string url1 = "facebook.com";
	string url2 = "google.com";

	URL u1;
	u1.goToURL(url1);
	u1.goToURL(url2);
	u1.goToURL(url1);
	u1.goToURL(url2);
	u1.goToURL(url1);

	cout << "Current Webpage: " << u1.currentWEBPage() << endl;

	u1.goBack();
	u1.goTONEXTPAGE();


	return 0;
}