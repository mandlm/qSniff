#include "sniffthread.h"
#include <wiringPi.h>
#include "rc-switch/RCSwitch.h"
#include <sstream>

void SniffThread::run()
{
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
                emit dataReceived("Unknown encoding");
			}
			else
            {
                std::stringstream result;
                result << "Received " << value << " / ";
                result << mySwitch.getReceivedBitlength() << " bit ";
                result << "Protocol: " << mySwitch.getReceivedProtocol();

                emit dataReceived(result.str().c_str());
			}

			mySwitch.resetAvailable();
		}

		delay(100);
	}
}

