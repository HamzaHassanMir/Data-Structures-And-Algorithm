class Solution
{
public:
	int maxSubarraySum(vector<int> &arr)
	{
		int size = arr.size();
		int sum = 0;
		int maxSum = INT_MIN; // INT_MIN in C++ is a macro that represents the minimum value that can be stored in an int data type
		for (int i = 0; i < size; i++)
		{
			sum += arr[i];
			if (sum > maxSum)
			{
				maxSum = sum;
			}
			if (sum < 0)
			{
				sum = 0;
			}
		}
		return maxSum;
	}
};