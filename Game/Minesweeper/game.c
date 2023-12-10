#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include "Foundation.h"

void GameMenu()
{
	printf("****************************************\n");
	printf("********    MineSweeper Game!    *******\n");
	printf("********         1.Play          *******\n");
	printf("********         0.Quit          *******\n");
	printf("********  Type to start or quit  *******\n");
	printf("***************************************");
}

void Initialization(char arr[ROWS][COLS], int row, int col, char setting)
{
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = setting;
		}
	}
}

void DisplayMap(char arr[ROWS][COLS], int row, int col)
{
	int m = 0;
	printf("********    MineSweeper Game!   ********\n|");
	for (int i = 0; i < row + 1; i++)
	{
		printf("%2d |", i);
	}
	printf("\n");
	for (int temp = 0; temp <= row; temp++)
	{
		printf("— — ");
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("|%2d |", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%2c |", arr[i][j]);
			m++;
			if (m % col == 0)
			{
				printf("\n");
				for (int temp = 0; temp <= row; temp++)
				{
					printf("— — ");
				}
				printf("\n");
			}
		}
	}
	printf("****************************************\n");
}

void SetMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int m = 0;
	int n = 0;
	int num = Easy;
	int count = 0;
	printf("Enter the location you want：(separate by a space)");
	scanf("%d %d", &m, &n);
	system("cls");
	mine[m][n] = '2';

	while (num)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			num--;
		}
	}

	mine[m][n] = '0';
	count = GetMineNum(mine, m, n);
	show[m][n] = count + '0';
	DisplayMap(show, ROW, COL);
}

void SweepMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 1;
	
	while (win < row*col - Easy)
	{
		printf("Enter the location you want：(separate by a space)");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("\nGame Over!\n");
				DisplayMap(mine, ROW, COL);
				printf("Game Over!\n\n");
				break;
			}
			else
			{
				system("cls");
				int count = GetMineNum(mine, x, y);
				show[x][y] = count + '0';
//				Expand(mine, show, x, y, win);
				DisplayMap(show, ROW, COL);
//				DisplayMap(mine, ROW, COL);
				win++;
			}
		}
		else
			printf("Please enter again\n");
	}
	if (win == row * col - Easy)
	{
		printf("You Win!!!!!!!!!!!!!\n");
	}
}

int GetMineNum(char arr[ROWS][COLS], int m, int n)
{
	return arr[m - 1][n - 1] + arr[m - 1][n] + arr[m - 1][n + 1] + arr[m][n - 1] + arr[m][n + 1]
		+ arr[m + 1][n - 1] + arr[m + 1][n] + arr[m + 1][n + 1] - 8 * '0';
}

void Expand(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* win)
{
	if (x > 0 && x <= ROW && y > 0 && y <= COL)
	{
		int minenum = GetMineNum(mine[ROWS][COLS], x, y);
		if (minenum == 0)
		{
			show[x][y] = ' ';
			//接下来向周围8个位置递归
			for (int i = x - 1; i <= x + 1; i++)
			{
				for (int j = y - 1; j <= j + 1; j++)
				{
					if (show[i][j] == '*')
					{
					Expand(mine, show, x, y, win);
					}
				}
			}
		}
		*win++;
	}
}

void Game()
{
	char MineMap[ROWS][COLS];
	char ShowMap[ROWS][COLS];

	Initialization(MineMap, ROWS, COLS, '0');
	Initialization(ShowMap, ROWS, COLS, '*');

//	DisplayMap(MineMap, ROW, COL);
	DisplayMap(ShowMap, ROW, COL);

	SetMine(MineMap, ShowMap, ROW, COL);
//	DisplayMap(MineMap, ROW, COL);

	SweepMine(MineMap, ShowMap, ROW, COL);

}

