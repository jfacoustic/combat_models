/*
 * main.cpp
 *
 *  Created on: Apr 26, 2017
 *      Author: joshua
 */
#include <iostream>
#include "Army.h"

using namespace std;

int main() {
	Army * x = new Army(1000);
	Army * y = new Army(500);
	cout << x->getSize() << " " << y->getSize() << endl;
	return 0;
}
