#pragma config(Motor,  port2,           backRight,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           frontRight,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           frontLeft,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           backLeft,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           flyLeft,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           flyRight,      tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	while (true)
	{
		motor[frontLeft] = vexRT[Ch3];
		motor[backLeft] = vexRT[Ch3];
		motor[frontRight] = vexRT[Ch2];
		motor[backRight] = vexRT[Ch2];

		if (Btn8D == true)
		{
			motor[flyLeft] = 127;
			motor[flyRight] = 127;
		}

	}

}
