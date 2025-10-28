/*
 * value_resource.hpp
 *
 *  Created on: Oct 28, 2025
 *      Author: Oleksiy
 */

#ifndef INTERFACES_VALUE_RESOURCE_HPP_
#define INTERFACES_VALUE_RESOURCE_HPP_

#include "cstdint"
#include "reader.hpp"

namespace nikolex {

class ValueResource : public Reader{

	void (* onReadingCompleteCb)(uint32_t result, void * ctx);
	void* _ctx;

public:

	virtual void read() = 0;

	void onReadingComplete(void (* callback)(uint32_t result, void * ctx), void * ctx = nullptr){
		onReadingCompleteCb = callback;
		_ctx = ctx;
	}

	void completeReading(uint32_t result){
		if(onReadingCompleteCb) onReadingCompleteCb(result, _ctx);
	}
};

}



#endif /* INTERFACES_VALUE_RESOURCE_HPP_ */
