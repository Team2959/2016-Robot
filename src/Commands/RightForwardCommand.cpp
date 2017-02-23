/*
 * RightForwardCommand.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: Kevin
 */

#include <Commands/RightForwardCommand.h>
#include <Robot.h>

RightForwardCommand::RightForwardCommand() : Command("RightForwardCommand")
{
	Requires(Robot::DriveTrainSubsystem.get());
}

RightForwardCommand::~RightForwardCommand()
{
}

void RightForwardCommand::Execute()
{
	Robot::DriveTrainSubsystem->TankDrive(0.0, 0.5);
}

bool RightForwardCommand::IsFinished()
{
	return false;
}

void RightForwardCommand::Interrupted()
{
	Robot::DriveTrainSubsystem->TankDrive(0.0, 0.0);
}

