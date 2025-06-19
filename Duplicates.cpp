class Solution
{
public:
	vector<int> findDuplicates(vector<int>& arr)
	{
		// code here
		int size = arr.size();
		vector<int> result{};
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (arr[i] == arr[j])
				{
					result.push_back(arr[i]);
				}
			}
		}
		if (result.size() == 1)
		{
			return{};
		}

		return result;
	}
};