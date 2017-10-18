#include "sniffer.h"

Sniffer::Sniffer(unsigned int pin)
{
	wiringPiSetup();
	
	m_switch.enableReceive(pin);
}

unsigned int Sniffer::receive()
{

	if (m_switch.available())
	{
		unsigned int receivedValue = m_switch.getReceivedValue();
		m_switch.resetAvailable();
		return receivedValue;
	}

	return 0;
}

