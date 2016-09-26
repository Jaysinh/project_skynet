#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include "boost_server/server.hpp"
#include <wiringPi.h>
#include "tools/Utils.h"
#include <vector>

using namespace std;

int main()
{
	try
	{
		char const *ip="192.168.0.175";
		char const *port="5555";
		char const *home=".";
		std::cout<<"initialising server at "<<ip<<":"<<port<<std::endl;
		http::server::server s(ip, port, home);
		s.run();
	}
	catch(std::exception& e)
	{
		std::cerr << "exception: " << e.what() << "\n";
	}
	return 0;
}
