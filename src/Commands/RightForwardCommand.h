/*
 * RightForwardCommand.h
 *
 *  Created on: Feb 21, 2017
 *      Author: Kevin
 */

#ifndef SRC_COMMANDS_RIGHTFORWARDCOMMAND_H_
#define SRC_COMMANDS_RIGHTFORWARDCOMMAND_H_

#include <Commands/Command.h>

class RightForwardCommand: public Command
{
public:
	RightForwardCommand();
	virtual ~RightForwardCommand();

	void Execute() override;
	bool IsFinished() override;
	void Interrupted() override;
};

#endif /* SRC_COMMANDS_RIGHTFORWARDCOMMAND_H_ */
