#pragma once

#define ROW 8
#define COL 8

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