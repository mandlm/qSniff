#include "sniffthread.h"
#include "sniffer.h"
#include <sstream>

void SniffThread::run()
{
	Sniffer sniffer(6);

	while (true)
	{
		unsigned int data = sniffer.receive();
		if (data != 0)
		{
			std::stringstream dataStream;
			dataStream << data;

			emit dataReceived(dataStream.str().c_str());
		}

		delay(100);
	}
}

