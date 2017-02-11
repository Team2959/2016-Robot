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
#include "CanTalonSRX.h"
#include <CanTalonSRXRobotDrive.h>

class DriveTrain: public frc::Subsystem
{
private:

	CanTalonSRX Left1MotorController
	{ 5 };
	CanTalonSRX Left2MotorController
	{ 6 };
	CanTalonSRX Right1MotorController
	{ 1 };
	CanTalonSRX Right2MotorController
	{ 2 };

	CanTalonSRXRobotDrive DriveTank
	{
		&Left1MotorController,
		&Left2MotorController,
		&Right1MotorController,
		&Right2MotorController,
		false, true };

public:
	DriveTrain();
	virtual ~DriveTrain();

	void InitDefaultCommand() override;

	void TankDrive(double leftSide, double rightSide);
	void TankDrive(frc::Joystick * pJoyStick);
	void Stop();
};

#endif /* SRC_SUBSYSTEMS_DRIVETRAIN_H_ */
