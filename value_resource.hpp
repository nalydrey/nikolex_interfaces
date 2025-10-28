/*
 * value_resource.hpp
 *
 *  Created on: Oct 28, 2025
 *      Author: Oleksiy
 */

#ifndef INTERFACES_VALUE_RESOURCE_HPP_
#define INTERFACES_VALUE_RESOURCE_HPP_

#include "cstdint"

namespace nikolex {

class ValueResource{

	void (* onConversionCompleteCb)(uint32_t result, void * ctx);
	void* _ctx;

public:

	virtual void startConversion() = 0;

	void onConversionComplete(void (* callback)(uint32_t result, void * ctx), void * ctx = nullptr){
		onConversionCompleteCb = callback;
		_ctx = ctx;	}

	void completeConversion(uint32_t result){
		if(onConversionCompleteCb) onConversionCompleteCb(result, _ctx);
	}
};

}



#endif /* INTERFACES_VALUE_RESOURCE_HPP_ */
