class Solution
{
public:
	bool isPalindrome(string s)
	{
		string check;
		int size = s.size();

		for (int i = 0; i < size; i++)
		{
			if (isalnum(s[i]))
			{
				check.push_back(tolower(s[i]));
			}
		}

		int start = 0, end = check.size() - 1;
		while (start < end)
		{
			if (check[start] != check[end])
			{
				return false;
			}
			start++;
			end--;
		}
		return true;
	}
};