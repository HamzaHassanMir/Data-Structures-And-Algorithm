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
/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
and removing all non-alphanumeric characters, it reads the same forward and backward. 
Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

Example 3:
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/