/*
 * BestTimeToBuySellStock.cc
 *
 *  Created on: 11-May-2024
 *      Author: Dhvanish Thakkar
 */

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

/***************************************************************************************************
 *    Description :
 *        WAP to find max profit while buying and selling stock.
 *    
 *        There are below conditions : 
 *            1) You need to must buy before selling
 *            2) You have do only 1 transaction inoder to achieve max profit
 *
 *    Solution :
 *        To solve this problem, You need to keep track of profit while going through entire inputs.
 *
 ***************************************************************************************************/

int BestTimeToBuySellStock(vector<int> &price)
{
	int maxProfit = 0;
	int currProfit = 0;
    int minPrice = INT_MAX;

	for (int i = 0; i < price.size(); i++)
	{
		minPrice = min(price[i], minPrice);
		currProfit = price[i] - minPrice;
		maxProfit = max(currProfit, maxProfit);
	}

	return maxProfit;
}

int main()
{
	vector<int> price = {7, 1, 5, 3, 6, 4};

    // Display input array
	cout << "Display Input Price Array : " << endl;
	for (auto price : price)
		cout << price << ",";
	cout << endl;

    // Function call
    int maxProfit = BestTimeToBuySellStock(price);

    cout << "Max Profit = " << maxProfit << endl;

    return 0;
}