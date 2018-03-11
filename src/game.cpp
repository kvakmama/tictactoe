/*
 * game.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: kvakmama
 */

#include "game.h"
#include <iostream>
using namespace std;

void game::init(){
	cout << "initial\n";
}
int game::find_winner(){
	cout << "win\n";
	return 1;
}
game::input game::read_input(){
	cout << "input\n";
	return input();
}
bool game::process_input(input inp){
	cout << "process\n";
	return true;
}
