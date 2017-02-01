/*
 * DriveTrain.h
 *
 *  Created on: Jan 28, 2017
 *      Author: mriri
 */

#ifndef SRC_SUBSYSTEMS_DRIVETRAIN_H_
#define SRC_SUBSYSTEMS_DRIVETRAIN_H_

#include <Commands/Subsystem.h>
#include "Joystick.h"
#include "RobotDrive.h"
#include "CanTalonSRX.h"

class DriveTrain: public frc::Subsystem {
private:

	CanTalonSRX LeftFrontDriveMotor {5};
	CanTalonSRX LeftBackDriveMotor {6};
	CanTalonSRX RightFrontDriveMotor {1};
	CanTalonSRX RightBackDriveMotor {2};

	frc::RobotDrive DriveTank
{&LeftFrontDriveMotor,
&LeftBackDriveMotor,
&RightFrontDriveMotor,
&RightBackDriveMotor};

public:
	DriveTrain();
	virtual ~DriveTrain();

	void InitDefaultCommand() override;

	void TankDrive(double leftSide, double rightSide);
	void TankDrive(frc::Joystick * pJoyStick);
	void Stop();
};

#endif /* SRC_SUBSYSTEMS_DRIVETRAIN_H_ */
