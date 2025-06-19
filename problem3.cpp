#include<iostream>
#include<string>
#include<string.h>

using namespace std;

class URL
{
	int total = 5;
	string savedURLS[5];
	int current = 0;
public:
	void push(string url)
	{
		if (current != total)
		{
			savedURls[current] = url;
			current++;
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
		psuh(URL);
		return true;

	}

	string currentWEBPage()
	{
		return savedURLS[current];
	}

	bool goBack()
	{
		pop();
		return true;
	}

	bool goTONEXTPAGE()
	{
		if (current != total)
		{	current++;
			cout << savedURLS[curent] << endl;
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

	u1.currentWEBPage();

	u1.goback();
	u1.goTONEXTPAGE();


	return 0;
}