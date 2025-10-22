/*
 * receiver.hpp
 *
 *  Created on: Jul 29, 2025
 *      Author: Oleksiy
 */

#ifndef NIKOLEX_INTERFACES_RECEIVER_HPP_
#define NIKOLEX_INTERFACES_RECEIVER_HPP_

#include "stdint.h"

namespace nikolex {

class Receiver {
protected:
	bool isAsync = false;
	void(*dataReceivedCb)(void *);
	void * context;
public:
	virtual void setDataReceivedCb(void(*callback)(void *), void * ctx = nullptr) final{
		dataReceivedCb = callback;
		context = ctx;
	}
	virtual void receive(uint8_t* buffer, uint32_t size) = 0;
	virtual bool getAsyncState() final{return isAsync;};
	virtual ~Receiver(){};
};


}



#endif /* NIKOLEX_INTERFACES_RECEIVER_HPP_ */
