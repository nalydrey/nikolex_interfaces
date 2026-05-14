/*
 * spi_interface.hpp
 *
 *  Created on: 5 мая 2026 г.
 *      Author: Oleksiy
 */

#ifndef NIKOLEX_SPI_INTERFACE_HPP_
#define NIKOLEX_SPI_INTERFACE_HPP_

#include <stdint.h>

namespace nikolex {

class SPI_Interface {
protected:
	void * context;
	void (*dataReadyCb)(void *) = nullptr;
public:

	virtual void setDataReadyCb(void(* callback)(void *), void* ctx = nullptr) final{
		dataReadyCb = callback;
		context = ctx;
	};
	virtual void init() = 0;
	virtual void transmitReceive(uint8_t * buffer, uint8_t * data, uint8_t size) = 0;
	virtual void complete() final {
		if(dataReadyCb) dataReadyCb(context);
	}
	virtual ~SPI_Interface(){};
};

}



#endif /* NIKOLEX_SPI_INTERFACE_HPP_ */
