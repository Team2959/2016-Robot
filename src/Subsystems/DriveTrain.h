/*
2 * DriveTrain.h
 *
 *  Created on: Jan 28, 2017
 *      Author: mriri
 */

#ifndef SRC_SUBSYSTEMS_DRIVETRAIN_H_
#define SRC_SUBSYSTEMS_DRIVETRAIN_H_

#include "WPILib.h"
#include <Commands/Subsystem.h>
#include <CANTalon.h>

class DriveTrain: public Subsystem
{
private:
	std::shared_ptr<CANTalon> Left1MotorController;
	std::shared_ptr<CANTalon> Left2MotorController;
	std::shared_ptr<CANTalon> Right1MotorController;
	std::shared_ptr<CANTalon> Right2MotorController;

	std::unique_ptr<RobotDrive> DriveTank;

	void InitHardware();

public:
	DriveTrain();
	virtual ~DriveTrain();

	void InitDefaultCommand() override;

	void TankDrive(double leftSide, double rightSide);
	void TankDrive(std::shared_ptr<Joystick> JoyStick);
	void Stop();
};

#endif /* SRC_SUBSYSTEMS_DRIVETRAIN_H_ */
