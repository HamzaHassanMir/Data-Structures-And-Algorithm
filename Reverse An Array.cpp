class Solution
{
public:
	void reverseArray(vector<int> &arr)
	{
		int size = arr.size();
		vector<int> temp(size);
		for (int i = 0; i < size; i++)
		{
			temp[i] = arr[size - i - 1];
		}
		int size1 = temp.size();
		for (int j = 0; j < size1; j++)
		{
			arr[j] = temp[j];
		}
	}
};
