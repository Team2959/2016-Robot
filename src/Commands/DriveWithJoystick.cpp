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
	// TODO Auto-generated constructor stub

}

DriveWithJoystick::~DriveWithJoystick() {
	// TODO Auto-generated destructor stub
}

void DriveWithJoystick::Execute()
{
	DriveTrainSubsystem->TankDrive(&oi->DriverJoystick);
}

bool DriveWithJoystick::IsFinished()
{
	return false;
}

