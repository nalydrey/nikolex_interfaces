/*
 * receive_transmitter.hpp
 *
 *  Created on: Jul 29, 2025
 *      Author: Oleksiy
 */

#ifndef NIKOLEX_INTERFACES_RECEIVE_TRANSMITTER_HPP_
#define NIKOLEX_INTERFACES_RECEIVE_TRANSMITTER_HPP_

#include <stdint.h>

namespace nikolex {

class ReceiveTransmitter {
protected:
	void * context;
	void (*dataReadyCb)(void *) = nullptr;
public:
	virtual void setDataReadyCb(void(* callback)(void *), void* ctx = nullptr) final{
		dataReadyCb = callback;
		context = ctx;
	};
	virtual void transmitReceive(uint8_t * buffer, uint8_t * data, uint8_t size) = 0;
	virtual ~ReceiveTransmitter(){};
};

}





#endif /* NIKOLEX_INTERFACES_RECEIVE_TRANSMITTER_HPP_ */
