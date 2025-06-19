class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
	{
		vector<int> mergedArray;

		for (int i = 0; i<m; i++)
		{
			mergedArray.push_back(nums1[i]);
		}
		for (int i = 0; i<n; i++)
		{
			mergedArray.push_back(nums2[i]);
		}
		sort(mergedArray.begin(), mergedArray.end());

		for (int i = 0; i < m + n; i++)
		{
			nums1[i] = mergedArray[i];
		}

	}
};