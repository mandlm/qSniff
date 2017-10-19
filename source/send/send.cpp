#include "sender.h"
#include <iostream>

int main(int argc, char **argv)
{
	std::cout << "Send" << std::endl;

	Sender sender(27);

	while (true)
	{
		unsigned int data = 23;

		std::cout << "Sending: " << data << std::endl;

		sender.send(data);

		delay(1000);
	}
    
	return 0;
}
