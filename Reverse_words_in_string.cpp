class Solution
{
public:
	string reverseWords(string s)
	{
		stringstream ss(s);
		vector<string> v1;
		string word, result;

		while (ss >> word)
		{
			v1.push_back(word);
		}


		for (int i = v1.size() - 1; i >= 0; i--)
		{
			result += v1[i];
			if (i > 0)
			{
				result += " ";
			}
		}
		return result;
	}
};