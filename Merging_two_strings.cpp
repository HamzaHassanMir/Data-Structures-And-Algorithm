#include<iostream>
#include<string>
using namespace std;

class Solution 
{
public:
	string mergeAlternately(string word1, string word2)
	{
		int size = word1.length();
		int size1 = word2.length();
		int max = size + size1;
		string merged;
		for (int i = 0; i < max; i++)
		{
			if (i < size)
			{
				merged += word1[i];
			}

			if (i < size1)
			{
				merged += word2[i];
			}
		}
		return merged;
	}
};