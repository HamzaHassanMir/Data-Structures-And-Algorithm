class Solution
{
public:
	int majorityElement(vector<int>& nums)
	{
		int majorityElement;
		int size = nums.size();
		int maxCount = 0;

		for (int i = 0; i < size; i++)
		{
			int count = 0;
			for (int j = 0; j < size; j++)
			{
				if (nums[i] == nums[j])
				{
					count++;
				}
			}

			if (count > maxCount)
			{
				maxCount = count;
				majorityElement = nums[i];
			}
		}

		return majorityElement;
	}
};
