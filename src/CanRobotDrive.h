/*
 * CanRobotDrive.h
 *
 *  Created on: Feb 1, 2017
 *      Author: mriri
 */

#ifndef SRC_CANROBOTDRIVE_H_
#define SRC_CANROBOTDRIVE_H_

#include <ErrorBase.h>
#include <MotorSafety.h>

class CanRobotDrive: public frc::ErrorBase, public frc::MotorSafety
{
public:
	CanRobotDrive(CanTalonSRX & LeftFrontMotor,
			CanTalonSRX & RightFrontMotor,
			CanTalonSRX & LeftBackMotor,
			CanTalonSRX & RightBackMotor);
	virtual ~CanRobotDrive() = default;

	void TankDrive(double leftSide, double rightSide);

protected:
 void InitRobotDrive();
 double Limit(double num);
 void Normalize(double* wheelSpeeds);
 void RotateVector(double& x, double& y, double angle);

 static const int kMaxNumberOfMotors = 4;
 double m_sensitivity = 0.5;
 double m_maxOutput = 1.0;
 std::shared_ptr<CanTalonSRX> m_frontLeftMotor;
 std::shared_ptr<CanTalonSRX> m_frontRightMotor;
 std::shared_ptr<CanTalonSRX> m_rearLeftMotor;
 std::shared_ptr<CanTalonSRX> m_rearRightMotor;
 std::unique_ptr<MotorSafetyHelper> m_safetyHelper;

private:
 int GetNumMotors() {
   int motors = 0;
   if (m_frontLeftMotor) motors++;
   if (m_frontRightMotor) motors++;
   if (m_rearLeftMotor) motors++;
   if (m_rearRightMotor) motors++;
   return motors;
 }
};


#endif /* SRC_CANROBOTDRIVE_H_ */
