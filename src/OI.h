#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	std::shared_ptr<Joystick> DriverJoystick;

	std::unique_ptr<JoystickButton> left;
	std::unique_ptr<JoystickButton> right;

public:
	OI();

	std::shared_ptr<Joystick> GetDriverJoystick();
};

#endif  // OI_H
