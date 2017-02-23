#include "OI.h"

#include <Commands/LeftForwardCommand.h>
#include <Commands/RightForwardCommand.h>

OI::OI()
{
	DriverJoystick.reset(new Joystick(0));

	left.reset(new JoystickButton(DriverJoystick.get(), 1));
	right.reset(new JoystickButton(DriverJoystick.get(), 2));

	// Process operator interface input here.
	left->WhileHeld(new LeftForwardCommand());
	right->WhileHeld(new RightForwardCommand());

	SmartDashboard::PutData("Left Forward", new LeftForwardCommand());
	SmartDashboard::PutData("Right Forward", new RightForwardCommand());
}

std::shared_ptr<Joystick> OI::GetDriverJoystick()
{
	return DriverJoystick;
}
