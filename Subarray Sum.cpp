class Solution
{
public:
	vector<int> subarraySum(vector<int> &arr, int target)
	{
		// code here
		int start = 0;
		int totalSum = 0;
		int size = arr.size();

		for (int right = 0; right < size; right++)
		{
			totalSum += arr[right];

			while (totalSum > target && start <= right)
			{
				totalSum -= arr[start];
				start++;
			}

			if (totalSum == target)
			{
				return{ start + 1, right + 1 };
			}
		}
		return vector<int>{-1};
	}
};