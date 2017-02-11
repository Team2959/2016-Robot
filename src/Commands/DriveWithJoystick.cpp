/*
 * DriveWithJoystick.cpp
 *
 *  Created on: Jan 28, 2017
 *      Author: mriri
 */

#include <Commands/DriveWithJoystick.h>

DriveWithJoystick::DriveWithJoystick() :
		CommandBase("DriveWithJoystick")
{
	Requires(DriveTrainSubsystem.get());
}

DriveWithJoystick::~DriveWithJoystick()
{
}

void DriveWithJoystick::Execute()
{
	DriveTrainSubsystem->TankDrive(&oi->DriverJoystick);
}

bool DriveWithJoystick::IsFinished()
{
	return false;
}
