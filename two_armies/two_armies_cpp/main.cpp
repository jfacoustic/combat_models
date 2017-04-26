/*
 * main.cpp
 *
 *  Created on: Apr 26, 2017
 *      Author: joshua
 */
#include <iostream>
#include "Army.h"
#include "Battle.h"
#include "BattleOfTwo.h"
using namespace std;

int main() {
	Army * x = new Army(1000);
	Army * y = new Army(500);
	cout << x->getSize() << " " << y->getSize() << endl;
	BattleOfTwo * battle = new BattleOfTwo(x, y);
	for (int i = 0; i < 10000; i++) {
		battle->nextTurn();
		cout << x->getSize() << " " << y->getSize() << endl;
	}
	return 0;
}
