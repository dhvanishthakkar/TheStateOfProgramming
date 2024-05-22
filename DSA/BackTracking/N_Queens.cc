/*
 * N_Queens.cc
 *
 *  Created on: 22-May-2024
 *      Author: Dhvanish Thakkar
 */

#include<iostream>
#include<string>
#include<vector>

using namespace std;

/**********************************************************************************************
 *  Description : 
 *   - WAP to place N-Queen in N*N chess board such a way that it should not attack each other
 *   - The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that
 *     no two queens attack each other. Given an integer n, return all distinct solutions to the
 *     n-queens puzzle. You may return the answer in any order.
 *   - Each solution contains a distinct board configuration of the n-queens' placement,
 *     where 'Q' and '.' both indicate a queen and an empty space, respectively.
 *
 *
 *  Example : 
 *   - Input: n = 4  ==> Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
 *
 *  LeetCode : 51
 *
 *  Solution :
 *   - We can solve this problem using backtracking
 *
 *  Time  Complexity :
 *  Space Complexity : 
 *
 *******************************************************************************/
vector<vector<string>>ans;

bool isSafe(int i, int j, vector<string>&board)
{
	int x = i, y = j;
	// top left diagonal
	while(x >= 0 && y >= 0)
	{
		if (board[x][y] == 'Q')
		   return false;
		x--;
	    y--;
	}

	// Upwards
	x = i;
	y = j;
	while(x >= 0)
	{
		if (board[x][y] == 'Q')
			return false;
		x--;
	}	

	// top right
	x = i;
	y = j;
	while( x >= 0 && y < board.size())
	{
		if (board[x][y] == 'Q')
			return false;
		y++;
		x--;
	}
	return true;
}

void N_Queens(int row, int n, vector<string> &board)
{
	if (row == n)
	{
		ans.push_back(board);
		return;
	}
	
	for (int j = 0; j < n ; j++)
	{
		if (isSafe(row, j, board))
		{
			//place the queen
			board[row][j] = 'Q';
			N_Queens(row+1, n, board);
			board[row][j]='.';
		}
	}
}

// Main Function
int main()
{
	// Testcase 1
	int row = 0, n = 4;
	string temp;
	for (int i = 0; i < n; i++)
		temp += '.';
	vector<string> board(n, temp);
	
	// Function call
	N_Queens(row, n, board);

	for(auto output : ans)
	{
		for (auto data :output)
		    cout << data << endl;
	    cout << endl;
	}
	cout << endl;
	return 0;
}