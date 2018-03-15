/*
 * game.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: kvakmama
 */

#include "game.h"
#include <iostream>
using namespace std;

int row,col = 0;

void game::init(){
	next_player = 1;
	cout << "initial\n";
	for ( int i = 0; i < 3; i++ ) {
		for ( int j = 0; j < 3; j++ ) {
			mat[i][j] = 0;
			cout << mat[i][j] << " ";
			}
		cout << endl;
		}

}
int game::find_winner(){
	if(
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
		)
	{
		return 0;
	}
	cout << "win\n";
	return 3-next_player;
}
game::input game::read_input(){
	cout << "row: ";
	cin >> row;
	cout << "col: ";
	cin >> col;
	cout << "input\n";
	return input{row,col};
}
bool game::process_input(input inp){
	cout << "process\n";
	mat[inp.row][inp.col] = next_player;

	for ( int i = 0; i < 3; i++ )
	{
		for ( int j = 0; j < 3; j++ )
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	next_player = 3-next_player;
	return true;
}
