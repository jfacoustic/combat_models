/*
 * BattleOfTwo.h
 *
 *  Created on: Apr 26, 2017
 *      Author: joshua
 */

#ifndef BATTLEOFTWO_H_
#define BATTLEOFTWO_H_

class BattleOfTwo : public Battle {
public:
	BattleOfTwo(Army * x, Army * y);
	virtual ~BattleOfTwo();
	void nextTurn();
};

#endif /* BATTLEOFTWO_H_ */
