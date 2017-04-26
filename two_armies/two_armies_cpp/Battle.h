/*
 * Battle.h
 *
 *  Created on: Apr 26, 2017
 *      Author: joshua
 */

#ifndef BATTLE_H_
#define BATTLE_H_

class Battle {
public:
	Battle();
	virtual ~Battle();
	virtual void nextTurn() {}
};

#endif /* BATTLE_H_ */
