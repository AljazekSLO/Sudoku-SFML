#pragma once
#include <iostream>
using namespace std;

class MapPicker {
public:
	int easy1[9][9]{
		{0, 0, 6, 7, 0, 2, 3, 1, 0},
		{8, 0, 0, 0, 9, 0, 0, 2, 7},
		{7, 0, 5, 0, 0, 8, 0, 9, 0},
		{0, 0, 9, 3, 6, 0, 8, 0, 2},
		{4, 7, 0, 0, 1, 0, 0, 0, 3},
		{2, 6, 0, 0, 0, 9, 0, 0, 1},
		{0, 9, 7, 0, 0, 0, 1, 0, 0},
		{0, 8, 0, 9, 0, 1, 4, 3, 5},
		{3, 1, 0, 0, 0, 6, 2, 7, 9},
	};

	int easy2[9][9]{
		{0, 6, 9, 5, 0, 1, 2, 0, 7},
		{2, 3, 1, 6, 0, 8, 0, 5, 0},
		{4, 0, 7, 2, 0, 0, 0, 1, 0},
		{0, 0, 4, 8, 0, 2, 0, 0, 0},
		{0, 9, 0, 4, 1, 6, 8, 0, 0},
		{3, 0, 0, 9, 5, 7, 1, 0, 0},
		{1, 0, 2, 0, 0, 0, 3, 9, 4},
		{5, 4, 0, 0, 2, 0, 0, 0, 0},
		{9, 0, 0, 1, 0, 0, 5, 6, 0},
	};

	int medium1[9][9]{
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 2, 5, 9, 0, 4, 7, 8, 0},
		{3, 7, 9, 0, 8, 0, 0, 0, 0},
		{0, 0, 0, 6, 0, 0, 0, 0, 3},
		{0, 0, 3, 0, 0, 1, 0, 0, 9},
		{0, 0, 0, 0, 2, 5, 0, 0, 0},
		{0, 0, 8, 0, 4, 0, 0, 6, 7},
		{0, 1, 4, 8, 0, 0, 0, 0, 0},
		{0, 3, 6, 0, 0, 2, 4, 0, 0},
	};

	int medium2[9][9]{
		{0, 0, 7, 0, 5, 0, 0, 6, 1},
		{0, 6, 0, 0, 0, 0, 8, 0, 0},
		{0, 0, 0, 2, 0, 0, 0, 0, 0},
		{0, 7, 0, 0, 3, 0, 0, 0, 0},
		{6, 0, 0, 0, 8, 0, 0, 9, 5},
		{3, 0, 0, 5, 9, 2, 7, 0, 0},
		{7, 1, 2, 9, 0, 0, 0, 0, 0},
		{0, 0, 8, 1, 2, 0, 5, 4, 0},
		{0, 0, 0, 0, 0, 0, 0, 0, 0},
	};

	int hard1[9][9]{
		{5, 0, 0, 0, 8, 0, 0, 4, 0},
		{0, 9, 0, 0, 0, 5, 7, 1, 0},
		{4, 0, 7, 1, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 3, 0, 0, 0, 4},
		{0, 0, 0, 0, 6, 0, 0, 7, 0},
		{9, 0, 8, 0, 0, 0, 3, 0, 6},
		{0, 0, 9, 0, 0, 8, 0, 0, 0},
		{0, 4, 0, 0, 7, 0, 5, 0, 0},
		{0, 0, 3, 4, 1, 6, 9, 8, 0},
	};

	int hard2[9][9]{
		{0, 0, 0, 0, 5, 0, 0, 0, 0},
		{1, 0, 2, 4, 9, 0, 3, 0, 0},
		{0, 0, 0, 0, 2, 1, 6, 0, 0},
		{0, 0, 0, 0, 0, 0, 0, 2, 0},
		{0, 3, 0, 0, 0, 0, 5, 0, 7},
		{5, 9, 0, 0, 0, 4, 0, 0, 0},
		{0, 0, 0, 9, 0, 0, 0, 0, 6},
		{9, 0, 0, 5, 0, 3, 8, 0, 4},
		{0, 0, 8, 0, 0, 6, 0, 0, 0},
	};
};