#pragma once

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

#define Easy 10

void GameMenu();

void Game();

void Initialization();

void DisplayMap();

void SetMine();

void SweepMine();

int GetMineNum();

void Expand();