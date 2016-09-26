/*
 * Utils.cpp
 *
 *  Created on: 26 Sep 2016
 *      Author: jaysinh
 */

#include "Utils.h"
#include <boost/algorithm/string.hpp>

using namespace std;

Utils::Utils() {}

Utils::~Utils() {}

vector<string> Utils::tokenize(string str, string delimiter)
{
	std::vector<std::string> tokens;
	boost::split(tokens, str, boost::is_any_of(delimiter), boost::token_compress_on);
	return tokens;
}
