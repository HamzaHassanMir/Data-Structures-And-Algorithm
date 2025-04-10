// An anagram is a word or phrase formed by 
// rearranging the letters of a different word or phrase, 
// using all the original letters exactly once.
// Exmaple : s = "anagram", t = "nagaram"
class Solution
{
public:
	bool isAnagram(string s, string t)
	{
		int size1 = s.size();
		int size2 = t.size();

		if (size1 != size2)
		{
			return false;
		}

		sort(s.begin(), s.end());
		sort(t.begin(), t.end());

		return s == t;
	}
};

/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false
*/