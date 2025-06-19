#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
	{
		int maxcount = 0;
		for (int i = 0; i < candies.size(); i++)
		{
			if (candies[i] > maxcount)
			{
				maxcount = candies[i];
			}
		}
		vector<bool> v1;
		for (int i = 0; i < candies.size(); i++)
		{
			if (candies[i] + extraCandies >= maxcount)
			{
				v1.push_back(true);
			}
			else
			{
				v1.push_back(false);
			}
		}
		return v1;
	}
};