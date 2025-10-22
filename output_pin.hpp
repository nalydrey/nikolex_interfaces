/*
 * output_pin.hpp
 *
 *  Created on: Jul 29, 2025
 *      Author: Oleksiy
 */

#ifndef NIKOLEX_INTERFACES_OUTPUT_PIN_HPP_
#define NIKOLEX_INTERFACES_OUTPUT_PIN_HPP_

namespace nikolex {

class OutputPin {
public:
	virtual void setHigh() = 0;
	virtual void setLow() = 0;
	virtual ~OutputPin(){};
};

}





#endif /* NIKOLEX_INTERFACES_OUTPUT_PIN_HPP_ */
