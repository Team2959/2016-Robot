/*
 * DriveTrain.cpp
 *
 *  Created on: Jan 28, 2017
 *      Author: mriri
 */

#include <Subsystems/DriveTrain.h>
#include "Commands/DriveWithJoystick.h"

DriveTrain::DriveTrain() :
frc::Subsystem("DriveTrain")
{
	// TODO Auto-generated constructor stub

}

DriveTrain::~DriveTrain() {
	// TODO Auto-generated destructor stub
}

void DriveTrain::InitDefaultCommand()
{
	SetDefaultCommand(new DriveWithJoystick());
}

void DriveTrain::TankDrive(frc::Joystick*pJoystick)
{
	TankDrive(pJoystick->GetRawAxis(1), pJoystick->GetRawAxis(3));
}

void DriveTrain::Stop()
{
	TankDrive(0.0, 0.0);
	//m_TankDrive.TankDrive(0.0, 0.0, false);
}
