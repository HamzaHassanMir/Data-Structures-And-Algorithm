#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution
{
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
		int size1 = nums1.size();
		int size2 = nums2.size();
		vector<int>merged;

		for (int i = 0; i < size1; i++)
		{
			merged.push_back(nums1[i]);
		}
		for (int i = 0; i < size2; i++)
		{
			merged.push_back(nums2[i]);
		}

		int totalSize = merged.size();
		sort(merged.begin(), merged.end());
		if (totalSize % 2 == 0)
		{
			int mid1 = totalSize / 2 - 1;
			int mid2 = totalSize / 2;
			return (merged[mid1] + merged[mid2]) / 2.0;
		}
		else
		{
			return merged[totalSize / 2];
		}
	}
};

int main()
{
	vector<int> v1{ 1, 2, 3, 4 };
	vector<int> v2{ 2, 3, 4 };

	Solution s1;
	cout<< s1.findMedianSortedArrays(v1, v2);

	return 0;
}

/*
When the total size is even, there isn't a single middle element, 
so you need to consider the two elements in the center.
The first middle element is located one index before the second middle element.
So, mid1 = totalSize / 2 - 1 gives the first of the two middle elements.
mid2 = totalSize / 2 naturally gives the second middle element.
*/

/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, 
return the median of the two sorted arrays.
The overall run time complexity should be O(log (m+n)).

Example 1:
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.

Example 2:
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
*/