class Solution
{
public:
	int maxProfit(vector<int>& prices)
	{
		int targetPrice = prices[0];
		int size = prices.size();
		int profit = 0;

		for (int i = 0; i < size; i++) // finding the lowest rate of stock
		{
			if (targetPrice > prices[i])
			{
				targetPrice = prices[i];
			}
			profit = max(profit, prices[i] - targetPrice);
		}
		return profit;
	}
};