#include "sniffer.h"
#include <iostream>

int main(int argc, char **argv)
{
	std::cout << "Sniff" << std::endl;

	Sniffer sniffer(6);

	while (true)
	{
		unsigned int data = sniffer.receive();
		if (data != 0)
		{
			std::cout << "Data: " << data << std::endl;
		}

		delay(100);
	}
    
	return 0;
}
