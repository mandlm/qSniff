#include "rc-switch/RCSwitch.h"
#include <wiringPi.h>
#include <iostream>

int main(int argc, char **argv)
{
	std::cout << "qSniff" << std::endl;

	wiringPiSetup();

	RCSwitch mySwitch = RCSwitch();

	mySwitch.enableReceive(6);

	while (true)
	{
		if (mySwitch.available())
		{
			int value = mySwitch.getReceivedValue();

			if (value == 0)
			{
				std::cout << "Unknown encoding" << std::endl;
			}
			else
			{
				std::cout << "Received " << value << " / ";
				std::cout << mySwitch.getReceivedBitlength() << " bit ";
				std::cout << "Protocol: " << mySwitch.getReceivedProtocol();
				std::cout << std::endl;
			}

			mySwitch.resetAvailable();
		}

		delay(100);
	}

	return 0;
}
