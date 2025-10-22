/*
 * input_pin.hpp
 *
 *  Created on: Jul 29, 2025
 *      Author: Oleksiy
 */

#ifndef NIKOLEX_INTERFACES_INPUT_PIN_HPP_
#define NIKOLEX_INTERFACES_INPUT_PIN_HPP_

#include "reader.hpp"

namespace nikolex {

class InputPin{

public:
	enum State {
		LOW,
		HIGH
	};
	virtual State read() = 0;
	virtual ~InputPin(){};
};

}




#endif /* NIKOLEX_INTERFACES_INPUT_PIN_HPP_ */
