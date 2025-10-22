/*
 * transmitter.hpp
 *
 *  Created on: Jul 29, 2025
 *      Author: Oleksiy
 */

#ifndef NIKOLEX_INTERFACES_TRANSMITTER_HPP_
#define NIKOLEX_INTERFACES_TRANSMITTER_HPP_

#include "stdint.h"

namespace nikolex {

class Transmitter {
protected:
	bool isAsync = false;
	void(*dataTransmittedCb)(void *);
	void * context;
public:
	virtual void setDataTransmittedCb(void(*callback)(void *), void * ctx) final{
		dataTransmittedCb = callback;
		context = ctx;
	}
	virtual void transmit(uint8_t * data, uint32_t size) = 0;
	virtual bool getAsyncState() final{return isAsync;};
	virtual ~Transmitter(){};

};

}




#endif /* NIKOLEX_INTERFACES_TRANSMITTER_HPP_ */
