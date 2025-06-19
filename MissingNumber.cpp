class Solution
{
public:
	int missingNumber(vector<int>& arr)
	{
		int size = arr.size() + 1;
		sort(arr.begin(), arr.end());

		int counter = 1;
		for (int i = 0; i < size; i++)
		{
			if (arr[i] != counter)
			{
				return counter;
			}
			counter++;
		}
		return size;
	}
};