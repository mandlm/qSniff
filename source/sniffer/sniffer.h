#pragma once

#include "rc-switch/RCSwitch.h"

class Sniffer
{
	private:
		RCSwitch m_switch;

	public:
		Sniffer() = delete;
		Sniffer(unsigned int pin);

		unsigned int receive();
};
