/*
 * Robot.h
 *
 *  Created on: Feb 21, 2017
 *      Author: Kevin
 */

#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_

#include "WPILib.h"
#include <Subsystems/DriveTrain.h>
#include <OI.h>

class Robot: public IterativeRobot
{
public:
	static std::unique_ptr<DriveTrain> DriveTrainSubsystem;
	static std::unique_ptr<OI> oi;

public:
	void RobotInit() override;

	void DisabledInit() override;
	void DisabledPeriodic() override;

	void AutonomousInit() override;
	void AutonomousPeriodic() override;

	void TeleopInit() override;
	void TeleopPeriodic() override;

	void TestPeriodic() override;

private:
	std::unique_ptr<Command> autonomousCommand;
	SendableChooser<Command*> chooser;
};

#endif /* SRC_ROBOT_H_ */
