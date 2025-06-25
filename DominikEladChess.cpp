#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define ROWS 8
#define COLS 8

int main()
{
	char board[COLS][ROWS + 1] = {
		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r', '\n'},
		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p', '\n'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\n'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\n'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\n'},
		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\n'},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P', '\n'},
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R', ' '}
	};
	std::string input;

	while (input != "exit")
	{
		for (int i = 0; i < ROWS; ++i) 
		{
			for (int j = 0; j < COLS; ++j) 
			{
				std::cout << board[i][j] << ' ';
			}
			std::cout << std::endl;
		}

		std::cout << "Enter Move" ;
		std::cin >> input;
		board[(input[3] - 49)][input[2] - 97] = board[(input[1] - 49)][input[0] - 97];
		board[(input[1] - 49)][input[0] - 97] = ' ';
	}
	

	return 0;
	
}

