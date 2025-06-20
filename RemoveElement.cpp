#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
	int removeElement(vector<int>& nums, int val)
	{
		int size = nums.size();
		int a = 0;
		for (int i = 0; i<size; i++)
		{
			if (nums[i] != val)
			{
				nums[a] = nums[i];
				a++;
			}
		}
		return a;
	}
};

// Requirement 
/*
Example 1:
Input: nums = [3,2,2,3], val = 3
Output: 2, nums = [2,2,_,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 2.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/