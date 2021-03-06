/*
 * BattleOfTwo.h
 *
 *  Created on: Apr 26, 2017
 *      Author: joshua
 */

#ifndef BATTLEOFTWO_H_
#define BATTLEOFTWO_H_
#include <iostream>
#include "Battle.h"
#include "Army.h"
class BattleOfTwo : public Battle {
public:
	BattleOfTwo(Army * x, Army * y);
	virtual ~BattleOfTwo();
	virtual void nextTurn();
private:
	Army * _x;
	Army * _y;
};

#endif /* BATTLEOFTWO_H_ */
