//============================================================================
// Name        : juci.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "game.h"
using namespace std;

void game_loop(){
	game my_game;
	my_game.init();

	while (!my_game.game_over()){
		game::input inp = my_game.read_input();
		my_game.process_input(inp);
	}
	int winner = my_game.find_winner();
	if (winner == 0)
	{
		cout << "dontetlen!" << endl;
	}
	else
	{
		cout << "nyertes: " << winner << endl;
	}
}

int main() {

	game_loop();
	return 0;

	/*int valami;
	cout << "valami:";
	cin >> valami;
	cout << "!!!Hello World!!! " << endl;
	cout << valami;*/

	int mat[3][3] = {{0,0,0},{0,0,0},{0,0,0}}; // matrix can have max 3 rows and 3 cols
	int i, j;
	int row;
	int col;
	int player;

	while (
			//l2r
			((mat[0][0]!=1) || (mat[1][1]!=1) || (mat[2][2]!=1))&&
			((mat[0][0]!=2) || (mat[1][1]!=2) || (mat[2][2]!=2))&&
			//r2l
			((mat[0][2]!=1) || (mat[1][1]!=1) || (mat[2][0]!=1))&&
			((mat[0][2]!=2) || (mat[1][1]!=2) || (mat[2][0]!=2))&&
			//1row
			((mat[0][0]!=1) || (mat[0][1]!=1) || (mat[0][2]!=1))&&
			((mat[0][0]!=2) || (mat[0][1]!=2) || (mat[0][2]!=2))&&
			//2row
			((mat[1][0]!=1) || (mat[1][1]!=1) || (mat[1][2]!=1))&&
			((mat[1][0]!=2) || (mat[1][1]!=2) || (mat[1][2]!=2))&&
			//3row
			((mat[2][0]!=2) || (mat[2][1]!=2) || (mat[2][2]!=2))&&
			((mat[2][0]!=2) || (mat[2][1]!=2) || (mat[2][2]!=2))&&
			//lcol
			((mat[0][0]!=1) || (mat[1][0]!=1) || (mat[2][0]!=1))&&
			((mat[0][0]!=2) || (mat[1][0]!=2) || (mat[2][0]!=2))&&
			//2col
			((mat[0][1]!=1) || (mat[1][1]!=1) || (mat[2][1]!=1))&&
			((mat[0][1]!=2) || (mat[1][1]!=2) || (mat[2][1]!=2))&&
			//3col
			((mat[0][2]!=1) || (mat[1][2]!=1) || (mat[2][2]!=1))&&
			((mat[0][2]!=2) || (mat[1][2]!=2) || (mat[2][2]!=2))



	) {
		cout << "row: ";
		cin >> row;
		cout << "col: ";
		cin >> col;
		cout << "player: ";
		cin >> player;

		mat[row][col] = player;
		cout << "You have entered the matrix :- " << endl;
		for ( i = 0; i < 3; i++ ) {
			for ( j = 0; j < 3; j++ ) {
				cout << mat[i][j] << " ";
				}
			cout << endl;
			}
	}
	cout << "winner: " << player;
	return 0;
}
