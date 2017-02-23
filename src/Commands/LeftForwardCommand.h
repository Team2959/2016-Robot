/*
 * LeftForwardCommand.h
 *
 *  Created on: Feb 21, 2017
 *      Author: Kevin
 */

#ifndef SRC_COMMANDS_LEFTFORWARDCOMMAND_H_
#define SRC_COMMANDS_LEFTFORWARDCOMMAND_H_

#include <Commands/Command.h>

class LeftForwardCommand: public Command
{
public:
	LeftForwardCommand();
	virtual ~LeftForwardCommand();

	void Execute() override;
	bool IsFinished() override;
	void Interrupted() override;
};

#endif /* SRC_COMMANDS_LEFTFORWARDCOMMAND_H_ */
