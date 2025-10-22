/*
 * reader.hpp
 *
 *  Created on: Oct 17, 2025
 *      Author: Oleksiy
 */

#ifndef INTERFACES_READER_HPP_
#define INTERFACES_READER_HPP_


namespace nikolex {

class Reader{


protected:

public:
	virtual void read() = 0;
	virtual ~Reader(){};
};

}



#endif /* INTERFACES_READER_HPP_ */
