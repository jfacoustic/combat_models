/*
 * Army.cpp
 *
 *  Created on: Apr 26, 2017
 *      Author: joshua
 */

#include "Army.h"

Army::Army(int n) {
	// TODO Auto-generated constructor stub
	_size = n;
}

Army::~Army() {
	// TODO Auto-generated destructor stub
}

int Army::getSize() {
	return _size;
}

void Army::setSize(int n) {
	_size = n;
}

