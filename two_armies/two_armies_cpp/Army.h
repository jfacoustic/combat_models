/*
 * Army.h
 *
 *  Created on: Apr 26, 2017
 *      Author: joshua
 */

#ifndef ARMY_H_
#define ARMY_H_

class Army {
public:
	Army(int n);
	virtual ~Army();
	int getSize();
	void setSize(int n);
private:
	int _size;
};

#endif /* ARMY_H_ */
