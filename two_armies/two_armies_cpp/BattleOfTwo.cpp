/*
 * BattleOfTwo.cpp
 *
 *  Created on: Apr 26, 2017
 *      Author: joshua
 */

#include "BattleOfTwo.h"

BattleOfTwo::BattleOfTwo(Army * x, Army * y) {
	// TODO Auto-generated constructor stub
	_x = x;
	_y = y;
}

BattleOfTwo::~BattleOfTwo() {
	// TODO Auto-generated destructor stub
}

void BattleOfTwo::nextTurn() {
	std::cout << "NEXT TURN" << std::endl;
	int y = _y->getSize();
	int x = _x->getSize();
	int dx = -1 * x / 100;
	int dy = -1 * y / 100;
	_x->setSize(_x->getSize() + dx);
	_y->setSize(_y->getSize() + dy);
}
