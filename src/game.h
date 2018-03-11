/*
 * game.h
 *
 *  Created on: Mar 11, 2018
 *      Author: kvakmama
 */

#ifndef GAME_H_
#define GAME_H_

class game{
public:
	void init();
	struct input{
		int row;
		int col;
		int player;
	};
	input read_input();
	int find_winner();
	bool process_input(input inp);
};



#endif /* GAME_H_ */
