/*
 * switch.hpp
 *
 *  Created on: Oct 1, 2025
 *      Author: Oleksiy
 */

#ifndef NIKOLEX_INTERFACES_SWITCH_HPP_
#define NIKOLEX_INTERFACES_SWITCH_HPP_


namespace nikolex {

class Switch{

public:
	virtual void on() = 0;
	virtual void off() = 0;
	virtual void toggle() = 0;

	virtual ~Switch(){};
};
}



#endif /* NIKOLEX_INTERFACES_SWITCH_HPP_ */
