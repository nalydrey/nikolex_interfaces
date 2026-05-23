/*
 * spi_transmit_only.hpp
 *
 *  Created on: 21 мая 2026 г.
 *      Author: Oleksiy
 */

#ifndef INTERFACES_SPI_TRANSMIT_ONLY_HPP_
#define INTERFACES_SPI_TRANSMIT_ONLY_HPP_


#include <stdint.h>

namespace nikolex {

class SpiTransmitOnly {
protected:
	void * context;
	void (*dataReadyCb)(void *) = nullptr;
public:

	virtual void setDataReadyCb(void(* callback)(void *), void* ctx = nullptr) final{
		dataReadyCb = callback;
		context = ctx;
	};
	virtual void init() = 0;
	virtual void transmit(uint8_t * data, uint32_t size) = 0;
	virtual void complete() final {
		if(dataReadyCb) dataReadyCb(context);
	}
	virtual ~SpiTransmitOnly(){};
};

}



#endif /* INTERFACES_SPI_TRANSMIT_ONLY_HPP_ */
