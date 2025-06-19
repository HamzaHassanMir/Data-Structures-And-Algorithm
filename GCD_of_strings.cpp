class Solution
{
public:
	string gcdOfStrings(string str1, string str2)
	{
		string divisor;
		int size = str1.length();
		int length;
		if (str1 + str2 != str2 + str1)
		{
			return "";
		}
		else
		{
			length = gcd(str1.length(), str2.length());
			divisor = str1.substr(0, length);
		}
		return divisor;
	}
};