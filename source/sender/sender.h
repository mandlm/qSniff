#pragma once

#include "RCSwitch.h"

class Sender
{
	private:
		RCSwitch m_switch;

	public:
		Sender() = delete;
		Sender(unsigned int pin);

		void send(unsigned int data);
};
