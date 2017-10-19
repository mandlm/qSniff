#include "sender.h"

Sender::Sender(unsigned int pin)
{
	wiringPiSetup();
	
	m_switch.enableTransmit(pin);
}

void Sender::send(unsigned int data)
{
	m_switch.send(data, 32);
}

