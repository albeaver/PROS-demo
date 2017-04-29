#include<API.h>
void arcadeDrive() { //FUNCTIONS MUST BE CREATED OUTSIDE OF THE MAIN FUNCTION
	int power; //C requires that there is a semicolon or curly bracket after each line of code
	int turn;
	power = joystickGetAnalog(1 /*Controller Number*/, 2 /*Axis*/); // vertical axis on left joystick
	turn  = joystickGetAnalog(1, 1); // horizontal axis on left joystick
	motorSet(2 /*Motor Number*/, power + turn); //L
	motorSet(3, power + turn);
	motorSet(8, power - turn);//R
	motorSet(9, power - turn);

}

void armControl(){
	//out 4
	//in 7

}
