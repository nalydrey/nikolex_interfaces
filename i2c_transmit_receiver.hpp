/*
 * i2c_transmit_receiver.hpp
 *
 *  Created on: Sep 30, 2025
 *      Author: Oleksiy
 */

#ifndef NIKOLEX_INTERFACES_I2C_TRANSMIT_RECEIVER_HPP_
#define NIKOLEX_INTERFACES_I2C_TRANSMIT_RECEIVER_HPP_

#include "stdint.h"

namespace nikolex {

class I2C_Transmit_Receiver{

protected:
	void(*dataReceivedCb)(void *) = nullptr;
	void(*dataTransmitedCb)(void *) = nullptr;
	void * context = nullptr;

public:

	void setContext(void *ctx){
		context = ctx;
	}

	void setReceivedCb(void (* callback)(void*)){
		dataReceivedCb = callback;
	}

	void setTransmitedCb(void (* callback)(void*)){
		dataTransmitedCb = callback;
	}

	virtual void transmit(uint16_t deviceAddress, uint8_t* data, uint32_t dataSize) = 0;
	virtual void receive(uint16_t deviceAddress, uint8_t* buffer, uint32_t size) = 0;
	virtual void waitUntilReady() = 0;

	virtual ~I2C_Transmit_Receiver(){};
};

}



#endif /* NIKOLEX_INTERFACES_I2C_TRANSMIT_RECEIVER_HPP_ */
