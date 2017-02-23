/*
 * LeftForwardCommand.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: Kevin
 */

#include <Commands/LeftForwardCommand.h>
#include <Robot.h>

LeftForwardCommand::LeftForwardCommand() : Command("LeftForwardCommand")
{
	Requires(Robot::DriveTrainSubsystem.get());
}

LeftForwardCommand::~LeftForwardCommand()
{
}

void LeftForwardCommand::Execute()
{
	Robot::DriveTrainSubsystem->TankDrive(0.5, 0.0);
}

bool LeftForwardCommand::IsFinished()
{
	return false;
}

void LeftForwardCommand::Interrupted()
{
	Robot::DriveTrainSubsystem->TankDrive(0.0, 0.0);
}
