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
	cout << "win\n";
	return 1;
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
	return true;
}
