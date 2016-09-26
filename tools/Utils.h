/*
 * Utils.h
 *
 *  Created on: 26 Sep 2016
 *      Author: jaysinh
 */

#ifndef TOOLS_UTILS_H_
#define TOOLS_UTILS_H_

#include <vector>
#include <string>

class Utils {
public:
	static Utils& getInstance( )
	{
		static Utils instance;
		return instance;
	}
	virtual ~Utils();
	std::vector<std::string> tokenize(std::string str,std::string delimiter);
private:
	Utils();
};

#endif /* TOOLS_UTILS_H_ */
